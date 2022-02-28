/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:56:34 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/28 18:51:14 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*node_min(t_list **stack_a)
{
	t_list	*beg;
	t_list	*min;

	beg = *stack_a;
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
