/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:51:16 by asalek            #+#    #+#             */
/*   Updated: 2022/02/22 15:19:13 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_in_stack(t_list *stack, int number)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack;
	while (tmp->content != number)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
