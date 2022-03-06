/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:29:24 by asalek            #+#    #+#             */
/*   Updated: 2022/03/02 20:59:59 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_if_sorted(t_info *t, int size)
{
	t_list	*ptr;
	int		i;

	i = ft_lstsize(t->stack_a);
	if (size != i)
		return (1);
	ptr = t->stack_a;
	while (ptr && ptr->next && ptr->content < ptr->next->content)
	{
		i--;
		ptr = ptr->next;
	}
	if (i == 1)
		return (0);
	else
		return (1);
}
