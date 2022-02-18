/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:03:45 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/18 15:42:40 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*strjoin_space(char *s1, char *s2, size_t n)
{
	char	*joined;
	size_t	i;	
	size_t	j;

	i = -1;
	j = -1;
	joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!joined)
		return (NULL);
	transform_char_in_str((char *)s1, ' ', '*');
	transform_char_in_str((char *)s2, ' ', '*');
	while (s1[++i])
		joined[i] = s1[i];
	joined[i++] = '*';
	if (s1 && n > 1)
		free(s1);
	while (s2[++j])
		joined[i + j] = s2[j];
	joined[i + j] = '\0';
	return (joined);
}
