/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:00:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/24 18:57:10 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include <stdio.h> 

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*stack_a;
	t_list	*stack_b;
//	size_t	i;


//	i = 0;
	if (ac > 1)
	{
		if (av[1] == NULL)
			exit(EXIT_FAILURE);
		data = init_data(av);
		check_input(data);
		stack_a = init_stack_a(&stack_a, data);
		stack_b = malloc(sizeof(t_list));
		sort_it(&stack_a, data);
		print_int_list(stack_a);
		printf("stack_b:\n");
//		print_int_list(stack_b);
		printf("nb elements = %zu\n", list_len(stack_a));
		lst_clear(&stack_a);
		lst_clear(&stack_b);
		clear_data(data);
		return (0);
	}
	exit(EXIT_FAILURE);
}
/*		while (i < ac)
**		{
**			ft_lstadd_back(&stack_b, new_list(ft_atoi(av[i])));
**			i++;
**		}
**		lst_clear(&stack_b);
*/
