/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:45:09 by asalek            #+#    #+#             */
/*   Updated: 2022/03/01 15:16:49 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_min_to_a_back(t_info *t)
{
	int	a;

	a = 1;
	while (a)
	{
		if (t->stack_a->index == t->min_index)
		{
			t->stack_a->sign = -2;
			t->min_index++;
			ra(t);
		}
		else if (ft_lstsize(t->stack_b) > 2
			&& ft_lstlast(t->stack_b)->index == t->min_index)
			rrb(t);
		else if (t->stack_b && t->stack_b->index == t->min_index)
			pa(t);
		else if (t->stack_a->next->index == t->min_index)
			sa(t);
		else
			a = 0;
	}
}

void	move_next_index(t_info *t)
{
	int	i;
	int	a_len;

	i = 0;
	a_len = ft_lstsize(t->stack_a);
	while (i < a_len)
	{
		if (t->stack_a->index <= t->mid_index)
			pb(t);
		else
		{
			if (ft_lstsize(t->stack_b) > 1
				&& t->stack_b->index < (t->mid_index / 2))
				rr(t);
			else
				ra(t);
		}
		i++;
	}
	t->max_index = t->mid_index;
	t->mid_index = t->max_index / 2;
}

void	a_b_sorting(t_info *t)
{
	while (check_node_index(&t->stack_a, t->size_a))
	{
		if (!ft_lstsize(t->stack_b))
			sort_b(t);
		else
			sort_a(t);
	}
}

void	sort_more(t_info *t)
{
	t->sign = 1;
	if (t->stack_a)
	{
		t->stack_a->sign = 0;
		t->min_index = find_min(t->stack_a)->index;
		t->max_index = find_max(t->stack_a)->index;
		t->mid_index = t->max_index / 2;
	}
	else
		exit(1);
	move_next_index(t);
	a_b_sorting(t);
}
