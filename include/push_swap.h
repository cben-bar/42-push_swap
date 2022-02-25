/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:15:00 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/25 21:33:26 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ****************************************************************************
-----------------------------------INCLUDES-----------------------------------
* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

/* ****************************************************************************
-------------------------------------ENUM-------------------------------------
* ************************************************************************** */

typedef enum s_bool
{
	false,
	true
}			t_bool;

/* ****************************************************************************
-------------------------------PROTOTYPES STRUCT-------------------------------
* ************************************************************************** */

typedef struct s_data
{
	char	**params;
}			t_data;

/* ****************************************************************************
------------------------------PROTOTYPES PARSING------------------------------
* ************************************************************************** */

int			main(int ac, char **av);
void		error_exit(t_data *data);
void		check_input(t_data *data);
t_bool		bool_all_int(t_data *data);
t_bool		bool_valid_input(t_data *data);
t_bool		bool_only_perfect_input(t_data *data);
t_bool		bool_check_charset(char c, const char *charset);
t_bool		bool_there_is_neg(char *s);
t_bool		bool_no_duplicates(t_data *data);
t_bool		bool_str_same(const char *s1, const char *s2);
t_data		*init_data(char **av);
t_list		*init_stack_a(t_list **stack_a, t_data *data);
void		a_is_sorted(t_list **stack_a, t_data *data);
void		clear_data(t_data *data);

/* ****************************************************************************
----------------------------PROTOTYPES LINKED LIST----------------------------
* ************************************************************************** */

t_list		*new_list(int content);
void		lst_clear(t_list **lst);

/* ****************************************************************************
-------------------------------PROTOTYPES UTILS-------------------------------
* ************************************************************************** */

t_bool		is_empty_list(t_list *lst);
size_t		list_len(t_list	*lst);
void		print_int_list(t_list *lst);
char		*strjoin_space(char *s1, char *s2, size_t n);
void		transform_char_in_str(char *s, char old, char n);
long long	ft_atoll(const char *s);

/* ****************************************************************************
-----------------------------PROTOTYPES OPERATIONS-----------------------------
* ************************************************************************** */

void		ra(t_list **stack_a, int to_print);
void		rb(t_list **stack_b, int to_print);
void		rr(t_list **stack_a, t_list **stack_b, int to_print);
void		sa(t_list **stack_a, int to_print);
void		sb(t_list **stack_b, int to_print);
void		ss(t_list **stack_a, t_list **stack_b, int to_print);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack_a, int to_find);
void		rrb(t_list **stack_b, int to_find);
void		rrr(t_list **stack_a, t_list **stack_b, int to_find);

/* ****************************************************************************
-----------------------------PROTOTYPES SORTING-----------------------------
* ************************************************************************** */

void		sort_it(t_list **stack_a, t_list **stack_b, t_data *data);
void		sort_two(t_list **stack_a);
void		sort_three(t_list **stack_a);

#endif
