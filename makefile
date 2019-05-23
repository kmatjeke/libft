# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:34:34 by kmatjeke          #+#    #+#              #
#    Updated: 2019/05/23 12:32:33 by kmatjeke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_strdup.c ft_strlen.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c

OBJECTS =	ft_strdup.o ft_strlen.o ft_putchar.o ft_putstr.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_memset.o

INCLUDES = ./

all : $(NAME)

$(NAME) : 	
	gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean : 	
	/bin/rm -f *.o
fclean : 	clean
			/bin/rm -f $(NAME)
re :	fclean all
