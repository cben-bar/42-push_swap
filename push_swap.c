/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:00:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/09 19:36:44 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include <stdio.h> 

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*stack_a;
	t_list	*stack_b;

	data = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if (av[1] == NULL)
			exit(EXIT_FAILURE);
		data = init_data(av);
		check_input(data);
		stack_a = init_stack_a(&stack_a, data);
		stack_a = init_index(&stack_a);
		if (list_len(stack_a) > 3)
		{
			stack_b = malloc(sizeof(t_list));
			if (!stack_b)
				return (0);
		}
		sort_it(&stack_a, &stack_b, data);
		lst_clear(&stack_a);
		free(stack_b);
		stack_b = NULL;
		clear_data(data);
		return (0);
	}
	exit(EXIT_FAILURE);
}
