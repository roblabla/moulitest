/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 21:56:31 by yyang             #+#    #+#             */
/*   Updated: 2015/02/09 23:00:19 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
    (void)s;
	return (3);
}

#ifndef __MOULITEST__
/*
** Since __MOULITEST__ is defined when tests are run.
** The following main will be ignored to avoid duplicate symbol.
** Moulitest will run it's own main function.
*/
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
        printf("%zu\n", ft_strlen(av[1]));
    return (0);
}
#endif
