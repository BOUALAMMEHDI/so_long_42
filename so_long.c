/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:50:10 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/12 12:00:08 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	chech_map(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width)
		{
			if (g_e.map[i][j] == 'P')
				g_e.count_p++;
			if (g_e.map[i][j] == 'E')
				g_e.count_e++;
			if (g_e.map[i][j] == 'C')
				g_e.count_c++;
			check_all_items(i, j);
			if (g_e.map[g_e.height - 1][g_e.width] != '\0')
				ft_error();
			j++;
		}
		i++;
	}
	check_items();
}

int	key_hook(int keycode)
{
	if (keycode == 53)
	{
		ft_putstr("\033[31mclose");
		free(g_e.map);
		exit(0);
	}
	if (keycode == 2)
		right_move();
	if (keycode == 1)
		down_move();
	if (keycode == 13)
		up_move();
	if (keycode == 0)
		left_move();
	return (1);
}

void	*get_img(int choix)
{
	int	width;
	int	height;

	if (choix == 1)
		return (g_e.img1 = mlx_xpm_file_to_image(g_e.mlx,
				"img/wall.xpm", &width, &height));
	if (choix == 2)
		return (g_e.img2 = mlx_xpm_file_to_image(g_e.mlx,
				"img/down.xpm", &width, &height));
	if (choix == 3)
		return (g_e.img3 = mlx_xpm_file_to_image(g_e.mlx,
				"img/exit.xpm", &width, &height));
	if (choix == 4)
		return (g_e.img4 = mlx_xpm_file_to_image(g_e.mlx,
				"img/c.xpm", &width, &height));
	if (choix == 5)
		return (g_e.img5 = mlx_xpm_file_to_image(g_e.mlx,
				"img/black.xpm", &width, &height));
	return (0);
}

void	load_map(void)
{
	int	i;
	int	j;

	g_e.mlx = mlx_init();
	g_e.mlx_win = mlx_new_window(g_e.mlx, (g_e.width) * 52,
			g_e.height * 52, "so_long");
	i = 0;
	while (i < g_e.height)
	{
		j = 0;
		while (j < g_e.width)
		{
			my_put_image_to_window(i, j);
			j++;
		}
		i++;
	}
	mlx_hook(g_e.mlx_win, 17, 0, ft_close, NULL);
	mlx_key_hook(g_e.mlx_win, key_hook, NULL);
	mlx_loop(g_e.mlx);
}

int	main(int argc, char **argv)
{
	int	*t;
	int	fd;
	int	fd1;

	if (argc == 2)
	{
		check_file_name(argv[1]);
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_comment();
		t = get_j_i(fd);
		g_e.height = t[1];
		g_e.width = t[0];
		fd1 = open(argv[1], O_RDONLY);
		g_e.map = get_map(fd1);
		if (g_e.width - 1 == g_e.height)
			ft_error();
		chech_map();
		check_all_width();
		load_map();
	}
	else
		ft_putstr("\033[32m argument not find ");
	return (0);
}
