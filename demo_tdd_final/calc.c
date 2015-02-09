#include <libft.h>

int		sum__(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		calc(char *str)
{
	char **split;
	char operateur;

	split = ft_strsplit(str, ' ');
	operateur = *split[1];
	if (operateur == '+')
		return (sum__(ft_atoi(split[0]), ft_atoi(split[2])));
	else
		return (0);
}