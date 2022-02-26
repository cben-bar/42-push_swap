/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:22:03 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/26 13:59:48 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_five(t_list **stack_a, **stack_b)
{
	if (list_len(*stack_a) == 5)
	{
	

	}
	mina_top(stack_a);
	pb(stack_a, stack_b, 1);
	sort_three(stack_a, 1);
	pa(stack_a, stack_b);
}
