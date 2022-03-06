/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:53:57 by asalek            #+#    #+#             */
/*   Updated: 2022/03/01 15:50:11 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sort_more_and_more(t_info *t)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_lstsize(t->stack_a))
	{
		i++;
	}
	i--;
	while (j < ft_lstsize(t->stack_b))
	{
		j++;
	}
	i += j;
	j = 0;
	return (i + j);
}

void	sort_b(t_info *t)
{
	int	position;

	position = t->stack_a->sign;
	if (t->stack_a->sign == 0)
	{
		while (t->stack_a->sign != -2)
		{
			if (t->stack_a->index != t->min_index)
				pb(t);
			push_min_to_a_back(t);
		}
	}
	else if (t->stack_a->sign != 0)
	{
		while (t->stack_a->sign == position)
		{
			if (t->stack_a->index != t->min_index)
				pb(t);
			push_min_to_a_back(t);
		}
	}
	if (t->stack_b)
		t->max_index = find_max(t->stack_b)->index;
	t->mid_index = (t->max_index - t->mid_index) / 2;
	t->mid_index += t->min_index;
}
