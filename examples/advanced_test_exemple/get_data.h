/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 20:38:57 by yyang             #+#    #+#             */
/*   Updated: 2015/02/11 22:14:22 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_DATA_H
#define GET_DATA_H

char *get_data(int is_new_data);
char *get_data_base(int is_new_data,
	char *(*get_new_data_fn)(void),
	char *(*get_cached_data_fn)(void));

#endif
