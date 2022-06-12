/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:02 by mboualam          #+#    #+#             */
/*   Updated: 2022/06/12 03:23:53 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 1

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <mlx.h>

struct s_ij{
	int	width;
	int	heigh;
};

struct s_elemnts{
	int		height;
	int		width;
	void	*img1;
	void	*img2;
	void	*img3;
	void	*img4;
	void	*img5;
	void	*mlx;
	void	*mlx_win;
	char	**map;
	char	*line;
	int		*t;
	char	*nline;
	int		count_c;
	int		count_p;
	int		count_e;
};

struct s_elemnts	g_e;
int		count(void);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	check_file_name(char *str);
void	ft_error(void);
int		*get_j_i(int fd);
char	**get_map(int fd);
void	right_move(void);
void	load_map(void);
void	right_move(void);
void	down_move(void);
void	left_move(void);
void	up_move(void);
void	chech_map(void);
char	*get_next_line(int fd);
char	*ft_strdup(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_putnbr(int nb);
void	*get_img(int choix);
void	winner(int i, int j, int a, int b);
void	check_all_width(void);
void	my_put_image_to_window(int i, int j);
void	check_items(void);
int		ft_close(void);
void	ft_decrement_c(int i, int j);
void	ft_po(int i, int j, int a, int b);
void	check_all_items(int i, int j);
void	ft_comment(void);
int		ftstrlen2(char	*str);
#endif
