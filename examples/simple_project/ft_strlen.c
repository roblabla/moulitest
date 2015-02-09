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
	size_t l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}


#ifndef __MOULITEST__
#include <stdio.h>

int main(void)
{
	printf("%s\n", "coucou");
	return (0);
}
#endif