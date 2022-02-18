/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_no_duplicates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:29:32 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/17 02:56:49 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

t_bool	bool_no_duplicates(t_data *data)
{
	size_t	y;
	size_t	z;

	y = 0;
	z = 0;
	while (data->params[y])
	{
		z = y + 1;
		if (data->params[z])
		{
			while (data->params[z])
			{
				if (bool_str_same(data->params[y], data->params[z]))
					return (false);
				z++;
			}
		}
		y++;
	}
	return (true);
}
