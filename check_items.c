/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_items.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:54:29 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/12 12:06:10 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_items(void)
{
	if (g_e.count_p != 1 || g_e.count_p > 1 || g_e.count_e == 0)
		ft_error();
	if (g_e.count_c < 1)
	{
		ft_error();
	}
}

void	check_all_items(int i, int j)
{
	if (g_e.map[i][j] != 'C' && g_e.map[i][j] != 'E'
		&& g_e.map[i][j] != '1' && g_e.map[i][j] != '0'
			&& g_e.map[i][j] != 'E' && g_e.map[i][j] != 'P')
		ft_error();
	if (g_e.map[0][j] != '1' || g_e.map[g_e.height - 1][j] != '1' ||
			g_e.map[i][0] != '1' || g_e.map[i][g_e.width - 1] != '1')
		ft_error();
	if (!g_e.map)
		ft_error();
}
