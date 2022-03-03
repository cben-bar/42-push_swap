/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:35:25 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/03 12:46:24 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

t_list	*init_index(t_list **stack_a)
{
	t_list	*ref;
	t_list	*start;
	int		index;

	ref = *stack_a;
	index = 0;
	while (ref)
	{
		start = *stack_a;
		index = 0;
		while (start)
		{
			printf("\tlld\n", start->index);
			if (ref->content > start->content)
			{
				index++;
				ref->index = index;
			}
			start = start->next;
		}
		ref = ref->next;
	}
	return (*stack_a);
}
