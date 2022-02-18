/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_valid_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:20:10 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/17 19:55:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

t_bool	bool_valid_input(t_data *data)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (data->params[y])
	{
		x = 0;
		while (data->params[y][x])
		{
			if (!bool_check_charset(data->params[y][x], "-0123456789"))
				return (false);
			x++;
		}
		y++;
	}
	return (true);
}
