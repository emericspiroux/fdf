#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 09:49:07 by rbenjami          #+#    #+#              #
#    Updated: 2013/11/20 11:31:21 by rbenjami         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC= gcc
CFLAGS= -Werror -Wall -Wextra -ansi -pedantic
NAME=libft

FT_C=ft_isascii.c ft_memchr.c ft_putstr.c ft_strdup.c ft_strncpy.c ft_isdigit.c	\
	ft_memcmp.c ft_strcat.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_islower.c	\
	ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isprint.c	\
	ft_memmove.c ft_strcmp.c ft_strlen.c ft_strstr.c ft_isalnum.c ft_isupper.c	\
	ft_memset.c ft_strncat.c ft_tolower.c ft_isalpha.c ft_memccpy.c ft_putchar.c\
	ft_strcpy.c ft_strncmp.c ft_toupper.c ft_isspace.c ft_memalloc.c ft_putnbr.c\
	ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c	\
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c	\
	ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c			\
	ft_putendl_fd.c ft_putnbr_fd.c ft_putendl.c

FT_O=$(FT_C:.c=.o)

all: $(NAME)

$(NAME): lib

o:
	@echo CREATE .o
	@gcc -c $(CFLAGS) $(FT_C) $(NAME).h

lib: o
	@echo CREATE LIBRARY
	@ar rc $(NAME).a $(FT_O) libft.h
	@ranlib $(NAME).a
	@echo CLEAN .o
	@rm -rf $(FT_O)

clean:
	@echo CLEAN .o
	@rm -rf $(FT_O)

fclean: clean
	@rm -rf $(NAME).h.gch

re: fclean all
