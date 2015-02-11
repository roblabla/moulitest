/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 21:56:31 by yyang             #+#    #+#             */
/*   Updated: 2015/02/11 22:14:19 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

static char *get_new_data(void)
{
	while (1)
		;
	return (strdup("new data"));
}

static char *get_cached_data(void)
{
	return (strdup("cached data"));
}

char *get_data_base(int is_new_data,
	char *(*get_new_data_fn)(void),
	char *(*get_cached_data_fn)(void))
{
	char *result;

	if (is_new_data)
		result = get_new_data_fn();
	else
		result = get_cached_data_fn();
	return (result);
}

char *get_data(int is_new_data)
{
	return (get_data_base(is_new_data, get_new_data, get_cached_data));
}
