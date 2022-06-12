/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:06:45 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/12 03:22:36 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**get_map(int fd)
{
	int	i;

	g_e.map = malloc(sizeof(char *) * g_e.height);
	i = 0;
	g_e.line = get_next_line(fd);
	while (g_e.line != NULL)
	{
		g_e.map[i] = g_e.line;
		g_e.line = get_next_line(fd);
		i++;
	}
	return (g_e.map);
}

void	check_all_width(void)
{
	int	i;
	int	check;

	check = ft_strlen(g_e.map[0]);
	i = 0;
	while (i < g_e.height - 1)
	{
		if (ft_strlen(g_e.map[i]) != check)
			ft_error();
		i++;
	}
}

void	ft_error(void)
{
	ft_putstr("\033[32mError\n Check your maps \033[0m");
	exit(0);
}
