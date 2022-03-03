/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:59:27 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/03 14:02:10 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_up_index(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
}
