/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_winner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:50:36 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/04 17:30:58 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	winner(int i, int j, int a, int b)
{
	if (g_e.map[i][j] == 'P' && g_e.map[a][b] == 'E'
				&& g_e.count_c == 0)
	{
		ft_putnbr(count());
		ft_putstr("\n \033[32m You win");
		exit(0);
	}
}
