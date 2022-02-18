/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_there_is_neg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:50:55 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/17 01:12:40 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	bool_there_is_neg(char *s)
{
	if (*s == '-' && ft_strlen(s) == 1)
		return (false);
	s++;
	while (*s != '-')
	{
		if (*s == 0)
			return (true);
		s++;
	}
	return (false);
}
