/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:00:41 by asalek            #+#    #+#             */
/*   Updated: 2022/03/02 20:55:39 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_info *t)
{
	t_list	*tmp;
	t_list	*last;

	tmp = t->stack_a;
	last = ft_lstlast(t->stack_a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&t->stack_a, last);
	write(1, "rra\n", 4);
}

void	rrb(t_info *t)
{
	t_list	*tmp;
	t_list	*last;

	if (t->stack_b)
	{	
		tmp = t->stack_b;
		last = ft_lstlast(t->stack_b);
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
				tmp->next = NULL;
				ft_lstadd_front(&t->stack_b, last);
			}
			tmp = tmp->next;
		}
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_info *t)
{
	t_list	*tmp;
	t_list	*last;

	if (t->stack_a && t->stack_a->next)
	{
		tmp = t->stack_a;
		last = ft_lstlast(t->stack_a);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(&t->stack_a, last);
	}
	if (t->stack_b && t->stack_b->next)
	{
		tmp = t->stack_b;
		last = ft_lstlast(t->stack_b);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(&t->stack_b, last);
	}
	write(1, "rrr\n", 4);
}
