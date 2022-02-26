/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:13:07 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/26 18:21:56 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	node_position(t_list **stack_a)
{
	t_list	*beg;
	t_list	*min;

	beg = *a;
	min = beg;
	while (beg->next)
	{
		if (beg->content < min->content)
			min = beg;
		beg = beg->next;
	}
	if (beg->content < min->content)
		min = beg;
	return (min);
}
