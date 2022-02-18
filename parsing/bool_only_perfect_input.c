/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_only_perfect_input.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:11:24 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/16 18:33:16 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	bool_only_perfect_input(t_data *data)
{
	size_t	i;

	i = 0;
	while (data->params[i])
	{
		if (!bool_there_is_neg(data->params[i]))
			return (false);
		i++;
	}
	return (true);
}
