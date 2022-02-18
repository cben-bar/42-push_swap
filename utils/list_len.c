/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:20:56 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/12 14:22:51 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	list_len(t_list *lst)
{
	size_t	len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	if (!is_empty_list(lst))
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			len++;
		}
	}
	return (len);
}
