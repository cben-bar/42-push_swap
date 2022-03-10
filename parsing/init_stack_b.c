/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:55:36 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/10 14:03:34 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*init_stack_b(t_list **stack_a, t_list **stack_b, t_data *data)
{
	*stack_b = malloc(sizeof(t_list));
	if (!*stack_b)
	{
		clean_all(stack_a, data);
		exit(EXIT_FAILURE);
	}
	return (*stack_b);
}
