# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egenis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 12:38:07 by egenis            #+#    #+#              #
#    Updated: 2018/05/26 17:07:42 by egenis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror

FILES = ./ft_atoi\
		./ft_bzero\
		./ft_isalnum\
		./ft_isalpha\
		./ft_isascii\
		./ft_isdigit\
		./ft_isprint\
		./ft_memccpy\
		./ft_memchr\
		./ft_memcmp\
		./ft_memcpy\
		./ft_memmove\
		./ft_memset\
		./ft_putchar\
		./ft_strcat\
		./ft_strchr\
		./ft_strcmp\
		./ft_strcpy\
		./ft_strdup\
		./ft_strlcat\
		./ft_strlen\
		./ft_strnlen\
		./ft_strncat\
		./ft_strncmp\
		./ft_strncpy\
		./ft_strrchr\
		./ft_strstr\
		./ft_strnstr\
		./ft_tolower\
		./ft_toupper

CFILES = $(addsuffix .c, $(FILES))

OFILES = $(addsuffix .o, $(FILES))

HEADER = ./libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(CFILES) -I $(HEADER)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
