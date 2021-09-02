# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 13:19:19 by xli               #+#    #+#              #
#    Updated: 2021/09/01 13:21:59 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = clang++

CFLAGS = -Wall -Wextra -Werror

INCLUDES = Account.hpp

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS)
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
