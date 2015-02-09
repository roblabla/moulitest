#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static char	*twl_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if ((int)len < 0 || !s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	bzero(sub, len + 1);
	strncpy(sub, s + start, len);
	return (sub);
}

static int		twl_count_words(const char *s, char c)
{
	int		count;
	int		insub;

	insub = 0;
	count = 0;
	while (*s != '\0')
	{
		if (insub == 1 && *s == c)
			insub = 0;
		else if (insub == 0 && *s != c)
		{
			insub = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		twl_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		word_count;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	word_count = twl_count_words(s, c);
	t = (char **)malloc(sizeof(*t) * (word_count + 1));
	if (t == NULL)
		return (NULL);
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = twl_strsub(s, 0, twl_wordlen(s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + twl_wordlen(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}