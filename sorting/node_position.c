/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:57:19 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/28 18:46:30 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	node_position(t_list **stack_a, t_list *node)
{
	t_list	*beg;
	size_t	i;

	i = 0;
	beg = *stack_a;
	while (beg->next)
	{
		if (beg == node)
			return (i);
		i++;
		beg = beg->next;
	}
	if (beg == node)
		return (i);
	return (-1);
}
