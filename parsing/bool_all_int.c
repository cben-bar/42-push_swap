/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oui.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:32:52 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/18 13:42:52 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	bool_all_int(t_data *data)
{
	int			i;
	int			j;
	char		**args;
	long long	arg_int;

	i = 0;
	j = 0;
	args = data->params;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-' && j == 0)
				j++;
			if (!ft_isdigit(args[i][j]))
				return (false);
			j++;
		}
		arg_int = ft_atoll(args[i]);
		if (arg_int < INT_MIN || arg_int > INT_MAX)
			return (false);
		i++;
	}
	return (true);
}
