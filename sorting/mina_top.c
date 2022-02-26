/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mina_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:53:37 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/26 13:59:45 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	mina_top(t_list **stack_a)
{
	int		min;
	t_list	*node;

	if (list_len(*stack_a) < 1)
		return ;
	min = minstack(stack_a);
	node = minstack_node(stack_a);
	if (node_position(stack_a, node) < list_len(*stack_a) / 2)
	{
		while ((*stack_a)->content != min)
			ra(stack_a, 1);
		return ;
	}
	while ((*stack_a)->content != min)
		rra(stack_a, 1);
}
