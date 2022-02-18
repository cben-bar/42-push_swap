/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:13:39 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/18 17:18:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_input(t_data *data)
{	
	if (!bool_all_int(data))
		error_exit("Error\nThe list must contain integers only\n", data);
	if (!bool_valid_input(data))
		error_exit("Error\nJust '-0123456789' are valids inputs\n", data);
	if (!bool_only_perfect_input(data))
		error_exit("Error\nInvalid input\n", data);
	if (!bool_no_duplicates(data))
		error_exit("Error\nThe list must not contain duplicates\n", data);
}		
