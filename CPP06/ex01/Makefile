# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 17:12:02 by xli               #+#    #+#              #
#    Updated: 2021/09/24 17:41:33 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDES = Data.hpp

SRCS = main.cpp Data.cpp

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
