# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antlopez <antlopez@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 13:28:38 by antlopez          #+#    #+#              #
#    Updated: 2022/12/04 13:28:40 by antlopez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRC =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c

OBJT =		$(SRC:.c=.o)

CFLAGS =	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME):
			gcc -c $(CFLAGS) $(SRC)
			ar rcs $(NAME) $(OBJT)

clean:
			rm -f $(OBJT)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
