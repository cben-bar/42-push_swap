/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:33:05 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/25 20:02:13 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*init_stack_a(t_list **stack_a, t_data *data)
{
	size_t	i;
	t_list	*tmp;
	t_list	*tmp2;

	i = -1;
	while (data->params[++i])
		ft_lstadd_back(stack_a, new_list(ft_atoi(data->params[i])));
	tmp = *stack_a;
	tmp2 = tmp->next;
	while (tmp)
	{
		tmp2 = tmp->next;
		if (tmp2)
		{
			while (tmp2)
			{
				if (tmp->content == tmp2->content)
					error_exit(data);
				tmp2 = tmp2->next;
			}
		}
		tmp = tmp->next;
	}
	return (*stack_a);
}
