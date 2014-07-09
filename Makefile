#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/11 12:43:05 by espiroux          #+#    #+#              #
#    Updated: 2013/12/17 12:29:57 by espiroux         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


export CC= gcc
export CFLAGS= -Werror -Wall -Wextra -ansi -pedantic

MLX_FLAGS= -lmlx -lXext -lX11
NAME=fdf
LIBFT_DIR=src/libft/
LIBMLX_DIR=/usr/X11/lib
INC_DIR=includes/
SRC_DIR=src/

FT_C=$(SRC_DIR)$(NAME).c $(SRC_DIR)draw_fdf.c $(SRC_DIR)hook.c $(SRC_DIR)readfile.c \
	$(SRC_DIR)get_next_line.c $(SRC_DIR)mathgeo.c $(SRC_DIR)iso.c

FT_O=$(FT_C:.c=.o)

all: $(NAME)

$(NAME): a
		@echo CREATE $(NAME)
		@gcc $(CFLAGS) -L$(LIBMLX_DIR) -I /usr/X11/include/ -I $(INC_DIR) $(MLX_FLAGS) $(FT_C) ./src/libft/libft.a -o $(NAME) -g

a:
		@(cd $(LIBFT_DIR) && $(MAKE))

clean:
		@(cd $(LIBFT_DIR) && $(MAKE) $@)
		@/bin/rm -rf $(NAME).dSYM


fclean: clean
		@/bin/rm $(NAME)

re: fclean all
