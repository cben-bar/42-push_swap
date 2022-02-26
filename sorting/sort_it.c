/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:26:55 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/26 14:00:10 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_it(t_list	**stack_a, t_list **stack_b, t_data *data)
{
	(void)data;
	(void)stack_b;
	a_is_sorted(stack_a, data);
	if (list_len(*stack_a) == 2)
		sort_two(stack_a);
	else if (list_len(*stack_a) == 3)
		sort_three(stack_a);
	if (list_len(stack_a) <= 5)
		sort_five(stack_a, stack_b);
}
