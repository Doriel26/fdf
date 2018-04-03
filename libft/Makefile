# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 19:38:27 by dchiche           #+#    #+#              #
#    Updated: 2018/01/25 15:45:54 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_memalloc.c ft_memmove.c ft_strcat.c \
ft_strlen.c ft_strstr.c ft_isascii.c ft_memccpy.c ft_memset.c \
ft_strchr.c ft_strncat.c ft_tolower.c ft_atoi.c ft_isdigit.c \
ft_memchr.c ft_putchar.c ft_strcmp.c ft_strncmp.c ft_toupper.c \
ft_bzero.c ft_isprint.c ft_memcmp.c ft_putnbr.c ft_strcpy.c \
ft_strncpy.c ft_isalnum.c ft_itoa.c ft_memcpy.c ft_putstr.c ft_strdup.c \
ft_strrchr.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
ft_strjoin.c ft_strtrim.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c ft_strsplit.c ft_strlcat.c \
ft_swap.c ft_sort_int_table.c ft_strrev.c ft_strcapitalize.c \
ft_str_is_printable.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
ft_lstiter.c ft_lstmap.c ft_putnbr_base.c ft_nlen.c ft_nlen_base.c ft_putnbr_max.c \
ft_itoa_u.c ft_putnbr_max_u.c get_next_line.c
LIB = ./
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "> Libft has been made :)"
	@ar rsc $(NAME) $(OBJ)

%.o : %.c
	@echo "=\c"
	@gcc -I $(LIB) -c $^ -Wall -Werror -Wextra

clean :
	@echo "----> Libft has been cleaned :)"
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
