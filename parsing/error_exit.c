/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:54:18 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/25 20:04:05 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_exit(t_data *data)
{
	write(2, "Error\n", 6);
	clear_data(data);
	exit(EXIT_FAILURE);
}
