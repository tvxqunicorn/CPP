# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 11:26:24 by xli               #+#    #+#              #
#    Updated: 2021/09/03 15:51:58 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Violence

CC = clang++

CFLAGS = -Wall -Wextra -Werror

INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS)
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
