/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:04:09 by asalek            #+#    #+#             */
/*   Updated: 2022/02/27 16:41:40 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	free_all(t_info *t)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = t->stack_a;
	while (t->stack_a)
	{
		tmp = t->stack_a;
		free(t->stack_a);
		t->stack_a = tmp->next;
	}
	if (t->i_tab)
		free(t->i_tab);
	if (t->tab)
		free(t->tab);
	while (t->splited[i])
	{
		free(t->splited[i]);
		i++;
	}
	free(t->splited);
}
