/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_put_image_to_window.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:12:02 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/02 23:41:22 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_put_image_to_window(int i, int j)
{
	if (g_e.map[i][j] == '1')
		mlx_put_image_to_window(g_e.mlx, g_e.mlx_win,
			(void *)get_img(1), j * 52, i * 52);
	if (g_e.map[i][j] == 'P')
		mlx_put_image_to_window(g_e.mlx, g_e.mlx_win,
			(void *)get_img(2), j * 52, i * 52);
	if (g_e.map[i][j] == 'C')
		mlx_put_image_to_window(g_e.mlx, g_e.mlx_win,
			(void *)get_img(4), j * 52, i * 52);
	if (g_e.map[i][j] == 'E')
		mlx_put_image_to_window(g_e.mlx, g_e.mlx_win,
			(void*)get_img(3), j * 52, i * 52);
}
