# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <dchiche@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/24 17:49:15 by dchiche           #+#    #+#              #
#    Updated: 2018/02/19 18:38:47 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
FLAGS = -Wall -Wextra -Werror
LIB = ./
SRCS = ft_fdf.c main.c parser.c ft_math.c ft_math_aux.c utils.c
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : lib $(OBJ)
	@gcc -o $(NAME) $(OBJ) -L./minilibx_macos/ -lmlx -framework OpenGL -framework Appkit -L./libft/ -lft
	@clear
	@figlet -f roman -o F D F | lolcat
	@echo "*-------------------* \033[1;33;40mUSAGE\033[0m *---------------------*"
	@echo "|                                                 |"
	@echo "| > ./fdf map_file.fdf [x_size] [y_size]          |"
	@echo "|                                                 |"
	@echo "| \033[1;37;40mKEY_CONTROLS\033[0m :                                  |"
	@echo "|                                                 |"
	@echo "|                \033[4;35;40m~ Controls ~\033[0m                     |"
	@echo "|  \033[1;37;40m[ESC]\033[0m : Quitter la map  \033[1;37;40m[4]\033[0m : Dep. Gauche      |"
	@echo "|  \033[1;37;40m[+]\033[0m : Zoom +            \033[1;37;40m[6]\033[0m : Dep. Droite      |"
	@echo "|  \033[1;37;40m[-]\033[0m : Zoom -            \033[1;37;40m[8]\033[0m : Dep. Haut        |"
	@echo "|  \033[1;37;40m[7]\033[0m : Rotation gauche   \033[1;37;40m[2]\033[0m : Dep. Bas         |"
	@echo "|  \033[1;37;40m[9]\033[0m : Rotation Droite                          |"
	@echo "|  \033[1;37;40m[1]\033[0m : Rotation Bas                             |"
	@echo "|  \033[1;37;40m[3]\033[0m : Rotation haut                            |"
	@echo "|                \033[4;35;40m~ Colors ~\033[0m                       |"
	@echo "|  \033[1;37;40m[Q]\033[0m : Monochrome        \033[1;37;40m[S]\033[0m : Couleur sable    |"
	@echo "|  \033[1;37;40m[A]\033[0m : Aleatoire                                |"
	@echo "|                                                 |"
	@echo "*-------------------------------------------------*\n"

lib :
	@make -C ./libft/ all
	@make -C ./minilibx_macos/ all

%.o : %.c
	@echo "=\c"
	gcc $(FLAGS) -I $(LIB) -c $? -o $@

clean :
	@echo "----> FDF has been cleaned :)"
	@rm -rf $(OBJ)
	@make -C ./minilibx_macos/ clean
	@make -C ./libft/ fclean

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: fclean lib clean re all
