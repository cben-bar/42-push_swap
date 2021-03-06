/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:02:53 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/09 18:31:21 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	size_t	max_bit;
	size_t	max_num;
	size_t	i;
	size_t	j;

	max_bit = max_bit_len(max_index(stack_a));
	max_num = list_len(*stack_a) - 1;
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j < max_num + 1)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (list_len(*stack_b) > 1)
			pa(stack_a, stack_b);
		i++;
	}
}
