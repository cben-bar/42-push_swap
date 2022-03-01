/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minstack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:52:13 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/01 13:27:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	minstack(t_list **stack_a)
{
	t_list	*beg;
	int		min;

	beg = *stack_a;
	min = beg->content;
	while (beg->next)
	{
		if (beg->content < min)
			min = beg->content;
		beg = beg->next;
	}
	if (beg->content < min)
		min = beg->content;
	return (min);
}
