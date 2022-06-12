/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:23 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/12 03:22:30 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	check_file_name(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	if (str[len - 3] == '.' && str[len - 2] == 'b'
		&& str[len - 1] == 'e'
		&& str[len] == 'r')
		return ;
	ft_putstr("\033[31mError\n => Check your extension\033[0m\n");
	exit(1);
}

int	ftstrlen2(char	*str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int	*get_j_i(int fd)
{
	struct s_ij		varij;
	int				*t;

	g_e.nline = get_next_line(fd);
	free(g_e.nline);
	varij.width = ftstrlen2(g_e.nline);
	varij.heigh = 0;
	while (g_e.nline != NULL)
	{
		g_e.nline = get_next_line(fd);
		free(g_e.nline);
		varij.heigh++;
	}
	t = (int *)malloc(sizeof(int) * 2);
	t[0] = varij.width;
	t[1] = varij.heigh;
	close(fd);
	return (t);
}
