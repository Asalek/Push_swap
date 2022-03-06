/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_node_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:58:55 by asalek            #+#    #+#             */
/*   Updated: 2022/02/22 15:18:33 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_node_index(t_list **stack, int size)
{
	t_list	*ptr;
	int		len;

	len = ft_lstsize(*stack);
	if (size != len)
		return (1);
	ptr = *stack;
	while (ptr->next)
	{
		if (ptr->index > ptr->next->index)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

void	set_index_to_node(t_info *t)
{
	int		i;
	t_list	*ptr;

	ptr = t->stack_a;
	while (ptr)
	{
		i = 0;
		while (i < ft_lstsize(t->stack_a))
		{
			if (ptr->content == t->i_tab[i])
				ptr->index = i;
			i++;
		}
		ptr = ptr->next;
	}
}
