# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 11:13:09 by xli               #+#    #+#              #
#    Updated: 2021/09/20 09:41:40 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = Bureaucrat.hpp

SRCS = Bureaucrat.cpp main.cpp

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
