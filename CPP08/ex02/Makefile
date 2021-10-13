# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 10:30:47 by xli               #+#    #+#              #
#    Updated: 2021/10/13 14:04:10 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = mutantstack.hpp

SRCS = main.cpp mutantstack.cpp

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
