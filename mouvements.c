/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:44:21 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/04 17:45:20 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count(void)
{
	static int	count = 0;

	count++;
	ft_putchar('\n');
	return (count);
}

void	right_move(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width - 1)
		{
			winner(i, j, i, j + 1);
			if (g_e.map[i][j] == 'P' && g_e.map[i][j + 1] != '1'
				&& g_e.map[i][j + 1] != 'E')
			{
				ft_decrement_c(i, j + 1);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(2),
					(j + 1) * 52, i * 52);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win,
					get_img(5), j * 52, i * 52);
				ft_po(i, j, i, j + 1);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	down_move(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width - 1)
		{
			winner(i, j, i + 1, j);
			if (g_e.map[i][j] == 'P' && g_e.map[i + 1][j] != '1'
				&& g_e.map[i + 1][j] != 'E')
			{
				ft_decrement_c(i + 1, j);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(2),
					j * 52, (i + 1) * 52);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(5),
					j * 52, i * 52);
				ft_po(i, j, i + 1, j);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	left_move(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width - 1)
		{
			winner(i, j, i, j - 1);
			if (g_e.map[i][j] == 'P' && g_e.map[i][j - 1] != '1'
				&& g_e.map[i][j - 1] != 'E')
			{
				ft_decrement_c(i, j - 1);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(2),
					(j - 1) * 52, i * 52);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(5),
					j * 52, i * 52);
				ft_po(i, j, i, j - 1);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	up_move(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width - 1)
		{
			winner(i, j, i - 1, j);
			if (g_e.map[i][j] == 'P' && g_e.map[i - 1][j] != '1'
				&& g_e.map[i - 1][j] != 'E')
			{
				ft_decrement_c(i - 1, j);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(2),
					j * 52, (i - 1) * 52);
				mlx_put_image_to_window(g_e.mlx, g_e.mlx_win, get_img(5),
					j * 52, i * 52);
				ft_po(i, j, i - 1, j);
				return ;
			}
			j++;
		}
		i++;
	}
}
