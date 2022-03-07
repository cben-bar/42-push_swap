/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:02:53 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/07 21:18:43 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	size_t	max_bit;
	
	max_bit = max_bit_len(max_index(stack_a));
	printf("%zu\n", max_bit);
}


