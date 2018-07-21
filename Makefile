# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anroche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/16 15:35:57 by anroche           #+#    #+#              #
#    Updated: 2017/08/09 17:49:17 by anroche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = src/main.c\
	  src/ft_parcing.c\
	  src/ft_error.c\
	  src/ft_display.c\
	  src/ft_hook_func.c\
	  src/ft_image.c\
	  src/ft_projection_isometrique.c\
	  src/ft_projection_parallele.c\
	  src/ft_select_projection.c\
	  src/ft_spoter.c\
	  src/ft_dark_vador.c

FLAGS=-Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)
	clear
	@echo " ________________ "
	@echo "< Compilation OK >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (oo)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "                ||----w (( "
	@echo "                ||     ||>> "


$(NAME):
	@make -C libft/ fclean && make -C libft/
	@make -C minilibx_macos/ clean && make -C minilibx_macos/
	@gcc -o $(NAME) $(FLAG) $(SRC) libft/libft.a minilibx_macos/libmlx.a  -framework OpenGL -framework AppKit

clean:
	clear
	@rm -rf $(OBJ)
	@echo " ________________ "
	@echo "<   clean : OK   >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (OO)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "                ||----w (( "
	@echo "                ||     ||>> "

fclean: clean
	clear
	@rm -rf $(NAME)
	@echo " ________________ "
	@echo "<  fclean : OK   >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (XX)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "             U  ||----w (( "
	@echo "                ||     ||>> "

re: fclean all
