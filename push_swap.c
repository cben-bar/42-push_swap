/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:00:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/18 17:07:13 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include <stdio.h> 

int	main(int ac, char **av)
{
	t_data	*data;
	t_list	*stack_a;
//	size_t	i;
//	size_t	j;


//	i = 0;
//	j = 0;
	if (ac > 1)
	{
		data = init_data(av);
//		while (data->params[j])
//		{
//			printf("paramas %zu de main = %s\n", j, data->params[j]);
//			j++;
//		}
		check_input(data);
		stack_a = init_stack_a(&stack_a, data);
		sort_it(&stack_a, data);
		print_int_list(stack_a);
		lst_clear(&stack_a);
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
