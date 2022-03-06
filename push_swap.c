/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:41:12 by asalek            #+#    #+#             */
/*   Updated: 2022/03/03 20:16:04 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lib/pushswap.h"

int	ft_is_valid(char c1, char c2)
{
	if (c1 == '-' && (!ft_isdigit(c2)))
		return (1);
	else if (ft_isdigit(c1) && c2 == '-')
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
		if (!ft_isdigit(str[i]))
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

int	main(int ac, char **av)
{
	t_info	t;

	t.stack_a = NULL;
	t.stack_b = NULL;
	if (ac >= 2)
	{
		t.tab = merge_argvs(av);
		if (t.tab[0] == ' ')
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		t.splited = ft_split(t.tab, ' ');
		duplicated_value(t.splited);
		t.stack_a = creat_stack(t.splited);
		t.size_a = ft_lstsize(t.stack_a);
		if (!check_if_sorted(&t, t.size_a))
			exit(0);
		sort_tab(&t);
		set_index_to_node(&t);
		sort(&t);
		free_all(&t);
	}
}

//indexation
//radix
//python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`