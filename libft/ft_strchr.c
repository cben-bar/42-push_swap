/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 04:35:25 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/27 19:54:18 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int x)
{
	char	x_char;

	x_char = (unsigned char)x;
	while (*s != x_char)
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
