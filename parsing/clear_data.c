/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:39:47 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/16 20:04:59 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	clear_data(t_data *data)
{
	size_t	i;

	i = 0;
	while (data->params[i])
	{
		free(data->params[i]);
		i++;
	}
	free(data->params);
	free(data);
}
