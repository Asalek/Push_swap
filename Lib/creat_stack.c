/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:30:39 by asalek            #+#    #+#             */
/*   Updated: 2022/02/11 18:55:54 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*creat_stack(char **str)
{
	t_list	*p;
	int		i;

	i = 0;
	p = NULL;
	while (str[i])
	{
		is_alpha_or_digit(str[i]);
		ft_lstadd_back(&p, ft_lstnew(ft_atoi(str[i])));
		i++;
	}	
	return (p);
}
