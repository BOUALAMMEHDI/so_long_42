# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 22:54:39 by mboualam          #+#    #+#              #
#    Updated: 2022/06/12 03:47:32 by mboualam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc
CFLAGS = -Werror -Wall -Wextra


SRCS = so_long.c so_long_utils.c mouvements.c ft_comment.c ft_po.c ft_decrement_c.c ft_close.c ft_putnbr.c check_items.c ft_winner.c get_map.c my_put_image_to_window.c get_next_line.c get_next_line_utils.c

OBJS = so_long.o so_long_utils.o mouvements.o ft_comment.o ft_po.o ft_decrement_c.o ft_close.o ft_putnbr.o ft_winner.o check_items.o get_map.o my_put_image_to_window.o get_next_line.o get_next_line_utils.o

MLX = -lmlx -framework OpenGL -framework AppKit

INCLUDE = so_Long.h

all: $(NAME)  $(INCLUDE)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(MLX) -o $@ $(OBJS)
	@echo "\033[34m==============================================\033[0m"
	@echo "Compile so_long.........................\033[32m[DONE]\033[0m"

clean:
	@${RM} ${OBJS}
	@echo "\033[34m==============================================\033[0m"
	@echo "\033[32m================>DELETED OBJECT<========\033[32m[DONE]\033[0m"
fclean: clean
	@${RM} ${NAME}
	@echo "\033[32m================>DELETED NAME<===========\033[32m[DONE]\033[0m"
	@echo "\033[34m==============================================\033[0m\n"
re: fclean all
