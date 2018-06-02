# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egenis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 12:38:07 by egenis            #+#    #+#              #
#    Updated: 2018/06/02 13:36:38 by egenis           ###   ########.fr        #
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
		./ft_strncat\
		./ft_strncmp\
		./ft_strncpy\
		./ft_strrchr\
		./ft_strstr\
		./ft_strnstr\
		./ft_tolower\
		./ft_toupper\
		./ft_memalloc\
		./ft_memdel\
		./ft_strnew\
		./ft_strdel\
		./ft_strdel\
		./ft_strclr\
		./ft_striter\
		./ft_striteri\
		./ft_strmap\
		./ft_strmapi\
		./ft_strequ\
		./ft_strnequ\
		./ft_strsub\
		./ft_strjoin\
		./ft_strtrim\
		./ft_strsplit\
		./ft_strclen\

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
