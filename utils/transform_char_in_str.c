/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_char_in_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:23:51 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/17 00:44:08 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	transform_char_in_str(char *s, char old, char new)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == old)
			s[i] = new;
		i++;
	}
}
