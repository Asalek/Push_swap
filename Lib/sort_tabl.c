/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tabl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:10:48 by asalek            #+#    #+#             */
/*   Updated: 2022/02/27 16:40:13 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_tab(t_info *t)
{
	int	i;
	int	j;

	i = 0;
	t->i_tab = malloc(ft_lstsize(t->stack_a) * sizeof(int));
	while (i < ft_lstsize(t->stack_a))
	{
		t->i_tab[i] = ft_atoi(t->splited[i]);
		i++;
	}
	i = 0;
	while (i < ft_lstsize(t->stack_a) - 1)
	{
		j = 0;
		while (j < ft_lstsize(t->stack_a) - i - 1)
		{
			if (t->i_tab[j] > t->i_tab[j + 1])
				swap(&t->i_tab[j], &t->i_tab[j + 1]);
			j++;
		}
	i++;
	}
}
