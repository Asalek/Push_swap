/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:59:26 by asalek            #+#    #+#             */
/*   Updated: 2022/03/02 20:57:07 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_info *t)
{
	t_list	*tmp;

	tmp = t->stack_a;
	t->stack_a = tmp->next;
	tmp->next = NULL;
	ft_lstadd_back(&t->stack_a, tmp);
	write(1, "ra\n", 3);
}

void	rb(t_info *t)
{
	t_list	*tmp;

	if (t->stack_b)
	{
		tmp = t->stack_b;
		t->stack_b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(&t->stack_b, tmp);
		write(1, "rb\n", 3);
	}
}

void	rr(t_info *t)
{
	t_list	*tmp;

	if (t->stack_a && t->stack_a->next)
	{
		tmp = t->stack_a;
		t->stack_a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(&t->stack_a, tmp);
	}
	if (t->stack_b && t->stack_b->next)
	{
		tmp = t->stack_b;
		t->stack_b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(&t->stack_b, tmp);
	}
	write(1, "rr\n", 3);
}
