/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_a_is_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:33:22 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/18 16:57:30 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	a_is_sorted(t_list **stack_a, t_data *data)
{
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *stack_a;
	tmp_next = tmp->next;

	while (tmp_next != NULL && tmp_next->content > tmp->content)
	{
		if (tmp_next->next == NULL)
		{
			clear_data(data);
			exit(EXIT_FAILURE);
		}
		tmp = tmp->next;
		tmp_next = tmp_next->next;
	}
}
