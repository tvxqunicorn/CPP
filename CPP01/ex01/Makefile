# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 11:26:24 by xli               #+#    #+#              #
#    Updated: 2021/09/07 15:24:05 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = Zombie.hpp

SRCS = Zombie.cpp ZombieHorde.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS)
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
