# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:34:34 by kmatjeke          #+#    #+#              #
#    Updated: 2019/05/21 10:07:33 by kmatjeke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_strdup.c ft_strlen.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c

OBJECTS =	ft_strdup.o ft_strlen.o ft_putchar.o ft_putstr.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o

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
