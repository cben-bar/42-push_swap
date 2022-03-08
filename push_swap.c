/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:00:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/08 20:41:39 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include <stdio.h> 

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*tmp_a;
//	t_list	*tmp_b;
//	int		i;

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
			stack_b = malloc(sizeof(t_list));
//		printf("max index main = %lld\n", max_index(&stack_a));
//		i = 0;
//		tmp_a = stack_a;
//		while (tmp_a)
//		{
//			printf("content a before %d = %lld\n", i, tmp_a->content);
//			printf("content a before %d = %p\n", i, &tmp_a->content);
//			tmp_a = tmp_a->next;
//			i++;
//		}
//		i = 0;
//		tmp_b = stack_b;
//		while (tmp_b)
//		{
//			printf("content b before %d = %lld\n", i, tmp_b->content);
//			printf("content b before %d = %p\n", i, &tmp_b->content);
//			tmp_b = tmp_b->next;
//			i++;
//		}
//		printf("main stack_a:\n");
//		print_int_list(stack_a);
//		printf("main stack_b:\n");
//		print_int_list(stack_b);
	
		tmp_a = stack_a;
/*		while (tmp_a)
		{
			printf("main content = %lld, index = %lld\n", tmp_a->content, tmp_a->index);
//			printf("\t'%.8s'\t'%lld'\n", (char *)&tmp_a->index, tmp_a->index);
			tmp_a = tmp_a->next;
		}*/
		sort_it(&stack_a, &stack_b, data);
//		printf("main stack_a:\n");
//		print_int_list(stack_a);
//		printf("main stack_b:\n");
//		print_int_list(stack_b);
		lst_clear(&stack_a);
		free(stack_b);
		stack_b = NULL;
		clear_data(data);
		return (0);
	}
	exit(EXIT_FAILURE);
}
