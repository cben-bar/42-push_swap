/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:35:25 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/02 19:12:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*init_index(t_list **stack_a)
/*{
	t_list	*beg;
	t_list	*beg_2;
	int		min;
	int		i;

	beg = *stack_a;
	min = beg->content;
	i = 0;
	while (beg->next)
	{	
		beg_2 = beg->next;
		while (beg_2->next)
		{
			if (beg_2->content < min)
			{
				min = beg_2->content;
				beg->index = i;
				i++;
			}
			beg_2 = beg_2->next;
		}
		if (beg_2->content < min)
		{
			min = beg_2->content;
			beg->index = i;
			i++;
		}
		beg = beg->next;
	}
	return (*stack_a);
}*/
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
