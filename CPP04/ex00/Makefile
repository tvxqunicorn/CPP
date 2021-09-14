# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 09:22:47 by xli               #+#    #+#              #
#    Updated: 2021/09/14 10:02:20 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = Animal.hpp WrongAnimal.hpp Dog.hpp Cat.hpp WrongCat.hpp

SRCS = Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp main.cpp

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
