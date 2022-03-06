/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:48:55 by asalek            #+#    #+#             */
/*   Updated: 2022/03/03 20:17:19 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lib/pushswap.h"

void	check_list_instructions_and_execute(char *str, t_info *t)
{
	if (!ft_strncmp(str, "sa\n", 3))
		sa(t);
	else if (!ft_strncmp(str, "sb\n", 3))
		sb(t);
	else if (!ft_strncmp(str, "ss\n", 3))
		ss(t);
	else if (!ft_strncmp(str, "pa\n", 3))
		pa(t);
	else if (!ft_strncmp(str, "pb\n", 3))
		pb(t);
	else if (!ft_strncmp(str, "ra\n", 3))
		ra(t);
	else if (!ft_strncmp(str, "rb\n", 3))
		rb(t);
	else if (!ft_strncmp(str, "rr\n", 3))
		rr(t);
	else if (!ft_strncmp(str, "rra\n", 3))
		rra(t);
	else if (!ft_strncmp(str, "rrb\n", 3))
		rrb(t);
	else if (!ft_strncmp(str, "rrr\n", 3))
		rrr(t);
	else
		write(2, "Error\n", 6);
}

void	ok_or_ko(t_info *t)
{
	if (!check_if_sorted(t, t->size_a))
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "KO\n", 3);
	}
}

int	main(int ac, char **av)
{
	static t_info	t;
	char			*buffer;

	if (ac >= 2)
	{
		t.tab = merge_argvs(av);
		t.splited = ft_split(t.tab, ' ');
		duplicated_value(t.splited);
		t.stack_a = creat_stack(t.splited);
		t.size_a = ft_lstsize(t.stack_a);
		sort_tab(&t);
		set_index_to_node(&t);
		buffer = get_next_line(0);
		while (buffer != NULL)
		{
			check_list_instructions_and_execute(buffer, &t);
			free(buffer);
			buffer = get_next_line(0);
		}
		ok_or_ko(&t);
		free_all(&t);
	}
}
