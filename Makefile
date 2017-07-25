# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anroche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/16 15:35:57 by anroche           #+#    #+#              #
#    Updated: 2017/06/24 15:02:33 by anroche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = main.c\
	  ft_parcing.c\
	  ft_error.c\
	  ft_display_map.c


OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

$Name = libft/libft.a
		 @gcc $(FLAG) $(SRC) 

.PHONY : all: $(NAME)

.PHONY : clean: rm -rf $(OBJ)

.PHONY : fclean: clean
		rm -rf $(name)

.PHONY : re: fclean all
