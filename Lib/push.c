/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:58:40 by asalek            #+#    #+#             */
/*   Updated: 2022/02/16 17:33:32 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pb(t_info *t)
{
	t_list	*tmp;
	t_list	*new;

	if (t->stack_a)
	{	
		tmp = t->stack_a->next;
		new = t->stack_a;
		new->next = NULL;
		ft_lstadd_front(&t->stack_b, new);
		t->stack_a = tmp;
		write(1, "pb\n", 3);
	}
}

void	pa(t_info *t)
{
	t_list	*tmp;
	t_list	*new;

	if (t->stack_b)
	{
		tmp = (t->stack_b)->next;
		new = t->stack_b;
		new->next = NULL;
		ft_lstadd_front(&t->stack_a, new);
		t->stack_b = tmp;
		write(1, "pa\n", 3);
	}
}
