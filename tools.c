/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:04:28 by asalek            #+#    #+#             */
/*   Updated: 2022/03/03 20:17:06 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lib/pushswap.h"

int	ft_is_valid(char c1, char c2)
{
	if (c1 == '-' && (!ft_isdigit(c2)))
		return (1);
	return (0);
}

void	is_alpha_or_digit(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_valid(str[i], str[i + 1]) == 1)
			exit(write(2, "Error\n", 6));
		if (ft_isalpha(str[i]))
			exit(write(2, "Error\n", 6));
		i++;
	}	
}

char	*merge_argvs(char **argv)
{
	int		i;
	char	*tab;

	i = 1;
	tab = ft_strdup(argv[i]);
	while (argv[++i])
	{
		tab = ft_strjoin(tab, " ");
		tab = ft_strjoin(tab, argv[i]);
	}
	return (tab);
}

void	duplicated_value(char	**str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
