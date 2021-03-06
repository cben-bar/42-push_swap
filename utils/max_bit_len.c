/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_bit_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:17:37 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/07 21:17:57 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	max_bit_len(long long nb)
{
	size_t	lb;

	lb = 32;
	while (lb != 0)
	{
		if (nb >> (lb - 1) & 1)
			return (lb);
		lb--;
	}
	return (lb);
}
