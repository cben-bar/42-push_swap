/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:02:53 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/08 19:52:17 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	size_t		max_bit;
	size_t		i;
	size_t		len_a;
	long long	max_int;
	t_list		*stack;

	
	max_bit = max_bit_len(max_index(stack_a));
	printf("max_bit = %zu\n", max_bit);
	len_a = list_len(*stack_a);
	printf("len_a = %zu\n", len_a);
	max_int = max_index(stack_a);
	printf("max_int = %lld\n", max_int);
	i = 1;
	stack = *stack_a;

	while (i != max_bit)
	{
		stack = *stack_a;
		while (stack->next)
		{
			if ((stack->index >> (i - 1)) & 1)
			{
				ra(&stack, 1);
			}
			else
			{
				pb(&stack, stack_b);
			}
			stack = stack->next;
		}
		if ((stack->index >> (i - 1)) & 1)
		{
			ra(&stack, 1);
		}
		else
		{
			pb(&stack, stack_b);
		}
		while (list_len(*stack_b) > 1)
		{
			pa(&stack, stack_b);
		}
		i++;
	}
}
