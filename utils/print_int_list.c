/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:27:52 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/24 18:56:55 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_int_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}
