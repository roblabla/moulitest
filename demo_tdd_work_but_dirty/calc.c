#include <libft.h>

int		calc(char *str)
{
	char **split;
	char operateur;
	int nb1;
	int nb2;
	int result;

	result = 0;
	split = ft_strsplit(str, ' ');
	nb1 = ft_atoi(split[0]);
	nb2 = ft_atoi(split[2]);
	operateur = *split[1];
	if (operateur == '+')
		result = nb1 + nb2;
	return (result);
}