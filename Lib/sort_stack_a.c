/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:52:43 by asalek            #+#    #+#             */
/*   Updated: 2022/02/24 18:14:35 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_a(t_info *t)
{
	int	b_size;
	int	i;

	i = 0;
	b_size = ft_lstsize(t->stack_b);
	while (i < b_size && t->stack_b)
	{
		if (t->stack_b->index == t->min_index)
			push_min_to_a_back(t);
		else if (t->stack_b->index >= t->mid_index)
		{
			t->stack_b->sign = t->sign;
			pa(t);
		}
		else
			rb(t);
		i++;
	}
	t->max_index = t->mid_index;
	t->mid_index = (t->max_index - t->min_index) / 2 + t->min_index;
	t->sign++;
}
