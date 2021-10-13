# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 10:30:47 by xli               #+#    #+#              #
#    Updated: 2021/10/13 10:31:05 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = span

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = span.hpp

SRCS = main.cpp span.cpp

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
