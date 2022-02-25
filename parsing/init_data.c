/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:01:24 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/25 20:01:45 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_data	*init_data(char **av)
{
	t_data	*data;
	char	*tmp;
	size_t	i;

	data = malloc(sizeof(t_data));
	if (!data)
		error_exit(data);
	i = 1;
	tmp = av[i];
	transform_char_in_str(av[1], ' ', '*');
	while (av[i + 1] != NULL)
	{
		tmp = strjoin_space(tmp, av[i + 1], i);
		i++;
	}
	data->params = ft_split(tmp, '*');
	if (data->params == NULL)
		error_exit(data);
	if (data->params[0] == '\0')
		exit(EXIT_FAILURE);
	if (av[2])
		free(tmp);
	return (data);
}
