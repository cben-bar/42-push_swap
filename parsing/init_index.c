/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:35:25 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/02 23:09:22 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

t_list	*init_index(t_list **stack_a)
{
	t_list		*tmp;
	int			min;
	int			min_2;
	long long	i;

	tmp = *stack_a;
	i = 1;
	min = minstack(stack_a);
	
	printf("min before loop = %d\n", min);
	
	while (tmp->next)
	{
		if (tmp->content == min)
		{
			tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
	if (tmp->content == min)
	{
		tmp->index = i;
		i++;
	}
	tmp = *stack_a;
	if (tmp->content == 0)
	{
		printf("index = %s\n", (char*)&tmp->index);
		printf("tmp->next->index%s\n", (char*)&tmp->next->index);
	//	tmp->index = 9;
	}
	while (tmp->next)
	{
		printf("in loop 2 = %d\n", min);
		min_2 = min + 1;
		if (tmp->content == min_2)
		{
			tmp->index = i;
			i++;
			min = tmp->content;
			if ((size_t)i != list_len(*stack_a))
				tmp = *stack_a;
		}
		tmp = tmp->next;
	}
	if (tmp->content == min_2)
	{
		tmp->index = i;
		i++;
		min = tmp->content;	
			if ((size_t)i != list_len(*stack_a))
				tmp = *stack_a;
	}
	return (*stack_a);
}

