/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:49:20 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/02 22:06:43 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!(alst) || !new)
		return ;
	tmp = lst_last(*alst);
	if (!tmp)
		*alst = new;
	else
		tmp->next = new;
}
