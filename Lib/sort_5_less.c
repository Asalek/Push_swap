/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_less.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:05:32 by asalek            #+#    #+#             */
/*   Updated: 2022/02/22 15:21:15 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_four(t_info *t)
{
	t_list	*min;

	min = find_min(t->stack_a);
	while (ft_lstsize(t->stack_a) > 3)
	{
		if (find_in_stack(t->stack_a, min->content) == 0)
			pb(t);
		else if (find_in_stack(t->stack_a, min->content) == 1)
			ra(t);
		else
			rra(t);
	}
	sort_three_or_less(t);
	pa(t);
}

void	sort_five(t_info *t)
{
	t_list	*min;

	min = find_min(t->stack_a);
	while (ft_lstsize(t->stack_a) > 4)
	{
		if (find_in_stack(t->stack_a, min->content) == 0)
			pb(t);
		else if (find_in_stack(t->stack_a, min->content) == 1)
			ra(t);
		else
			rra(t);
	}
	sort_four(t);
	pa(t);
}
