/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:50:49 by asalek            #+#    #+#             */
/*   Updated: 2022/02/21 21:00:29 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_info *t)
{
	int	c;

	if (ft_lstsize(t->stack_a) <= 1)
		return ;
	c = t->stack_a->content;
	t->stack_a->content = t->stack_a->next->content;
	t->stack_a->next->content = c;
	c = t->stack_a->index;
	t->stack_a->index = t->stack_a->next->index;
	t->stack_a->next->index = c;
	write(1, "sa\n", 3);
}

void	sb(t_info *t)
{
	int	c;

	if (ft_lstsize(t->stack_b) <= 1)
		return ;
	c = t->stack_b->content;
	t->stack_b->content = t->stack_b->next->content;
	t->stack_b->next->content = c;
	c = t->stack_b->index;
	t->stack_b->index = t->stack_b->next->index;
	t->stack_b->next->index = c;
	write(1, "sb\n", 3);
}

void	ss(t_info *t)
{
	int	c;

	if (ft_lstsize(t->stack_a) > 1)
	{
		c = t->stack_a->content;
		t->stack_a->content = t->stack_a->next->content;
		t->stack_a->next->content = c;
	}
	if (ft_lstsize(t->stack_b) > 1)
	{
		c = t->stack_b->content;
		t->stack_b->content = t->stack_b->next->content;
		t->stack_b->next->content = c;
	}
	write(1, "ss\n", 3);
}
