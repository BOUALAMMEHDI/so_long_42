/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:35:12 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/07 14:01:09 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(void)
{
	ft_putstr("\033[31m\nClose");
	free(g_e.map);
	exit(0);
}
