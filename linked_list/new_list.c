/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:49:31 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/17 04:18:38 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

t_list	*new_list(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		write(2, "Error\nFailure list allocation\n", 30);
		exit(EXIT_FAILURE);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}
