/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:05:46 by asalek            #+#    #+#             */
/*   Updated: 2022/02/22 15:19:57 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*find_min(t_list *s)
{
	t_list	*min;
	t_list	*stack;

	min = s;
	stack = s;
	while (stack)
	{
		if (min->content > stack->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*find_max(t_list *s)
{
	t_list	*max;
	t_list	*stack;

	max = s;
	stack = s;
	while (stack)
	{
		if (max->content < stack->content)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
