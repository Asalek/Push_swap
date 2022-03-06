/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <asalek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:47:25 by asalek            #+#    #+#             */
/*   Updated: 2022/02/21 18:10:31 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_tab(char	*str, char c)
{
	if (c == '\0' && str[0] == '\0')
	{
		free(str);
		return (0);
	}
	return (str);
}

char	get_a_char(int fd)
{
	static char	tab[BUFFER_SIZE];
	static char	*ptr_tab;
	static int	len = 0;
	char		c;

	if (len == 0)
	{
		len = read(fd, tab, BUFFER_SIZE);
		ptr_tab = tab;
		if (len == 0 || len == -1)
		{
			return (0);
		}
	}
	c = *ptr_tab;
	ptr_tab++;
	len--;
	return (c);
}

char	*ft_realloc(char *ptr, size_t size)
{
	char	*temp;
	int		i;

	temp = ptr;
	ptr = malloc(size + 1);
	i = 0;
	while (temp[i])
	{
		ptr[i] = temp[i];
		i++;
	}
	ptr[i + 1] = '\0';
	free(temp);
	return (ptr);
}

char	is_newline_endof_str(char c)
{
	if (c == '\0')
		return ('\0');
	else
		return ('\n');
}

char	*get_next_line(const int fd)
{
	char	c;
	char	*str;
	int		i;

	if (!BUFFER_SIZE)
		return (0);
	i = 0;
	str = malloc(BUFFER_SIZE + 1);
	if (!str)
		return (NULL);
	c = get_a_char(fd);
	while (c != '\n' && c != '\0')
	{
		str[i] = c;
		c = get_a_char(fd);
		i++;
		if (i >= BUFFER_SIZE + 1)
			str = ft_realloc(str, i + 1);
	}
	str[i] = is_newline_endof_str(c);
	if (c == '\n')
		str[i + 1] = '\0';
	return (free_tab(str, c));
}
