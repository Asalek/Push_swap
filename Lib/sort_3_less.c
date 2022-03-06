/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_less.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:08:04 by asalek            #+#    #+#             */
/*   Updated: 2022/02/27 16:40:47 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort(t_info *t)
{
	if (ft_lstsize(t->stack_a) == 2)
	{
		if (t->stack_a->content > t->stack_a->next->content)
			sa(t);
	}
	else if (ft_lstsize(t->stack_a) == 3)
		sort_three_or_less(t);
	else if (ft_lstsize(t->stack_a) == 4)
		sort_four(t);
	else if (ft_lstsize(t->stack_a) == 5)
		sort_five(t);
	else
		sort_more(t);
}

void	sort_three_or_less(t_info *t)
{
	if (t->stack_a->content > t->stack_a->next->content
		&& t->stack_a->content < t->stack_a->next->next->content)
		sa(t);
	else if (t->stack_a->content > t->stack_a->next->content
		&& t->stack_a->next->content > t->stack_a->next->next->content)
	{
		sa(t);
		rra(t);
	}
	else if (t->stack_a->content > t->stack_a->next->content
		&& t->stack_a->next->content < t->stack_a->next->next->content)
		ra(t);
	else if (t->stack_a->content < t->stack_a->next->content
		&& t->stack_a->next->next->content < t->stack_a->content)
		rra(t);
	else if (t->stack_a->content < t->stack_a->next->content
		&& t->stack_a->next->content > t->stack_a->next->next->content)
	{
		sa(t);
		ra(t);
	}
}
