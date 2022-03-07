/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:58:08 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/07 20:59:39 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long long	max_index(t_list **stack_a)
{
	t_list	*beg;
	int		max;

	beg = *stack_a;
	max = beg->index;
	while (beg->next)
	{
		if (beg->index > max)
			max = beg->index;
		beg = beg->next;
	}
	if (beg->index > max)
		max = beg->index;
	return (max);
}
