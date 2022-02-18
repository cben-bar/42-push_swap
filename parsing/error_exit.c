/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:54:18 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 18:00:22 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_exit(const char *msg, t_data *data)
{
	write(2, msg, ft_strlen(msg));
	clear_data(data);
	exit(EXIT_FAILURE);
}
