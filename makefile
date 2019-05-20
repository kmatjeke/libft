# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:34:34 by kmatjeke          #+#    #+#              #
#    Updated: 2019/05/20 12:51:12 by kmatjeke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_strdup.c ft_strlen.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strcat.c

OBJECTS =	ft_strdup.o ft_strlen.o ft_putchar.o ft_putstr.o ft_strcpy.o ft_strcat.o

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
