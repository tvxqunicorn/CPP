# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 11:26:23 by xli               #+#    #+#              #
#    Updated: 2021/09/27 12:09:36 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Iter

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDES = iter.hpp

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCLUDES)
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
