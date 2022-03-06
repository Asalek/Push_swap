/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:41:20 by asalek            #+#    #+#             */
/*   Updated: 2022/02/22 15:09:39 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

typedef struct push
{
	t_list	*stack_b;
	t_list	*stack_a;
	int		sign;
	int		size_a;
	char	**splited;
	char	*tab;
	int		*i_tab;
	int		max_index;
	int		min_index;
	int		mid_index;
}	t_info;

//sort prototype

void	sa(t_info *lst);
void	sb(t_info *lst);
void	ss(t_info *lst_a);
void	pa(t_info *t);
void	pb(t_info *t);
void	ra(t_info *t);
void	rb(t_info *t);
void	rr(t_info *t);
void	rra(t_info *t);
void	rrb(t_info *t);
void	rrr(t_info *t);

//tools

int		ft_is_valid(char c1, char c2);
void	is_alpha_or_digit(char const *str);
char	*merge_argvs(char **argv);
void	duplicated_value(char	**str);
t_list	*creat_stack(char **str);
int		check_if_sorted(t_info *t, int size);
void	sort(t_info *t);
void	sort_three_or_less(t_info *t);
int		find_in_stack(t_list *stack, int number);
void	sort_five(t_info *t);
t_list	*find_min(t_list *s);
t_list	*find_max(t_list *s);
void	sort_four(t_info *t);
void	sort_more(t_info *t);
void	sort_tab(t_info *t);
int		check_node_index(t_list **stack, int s);
void	set_index_to_node(t_info *t);
void	move_next_index(t_info *t);
void	sort_b(t_info *t);
void	sort_a(t_info *t);
void	push_min_to_a_back(t_info *t);
void	free_all(t_info *t);

#endif