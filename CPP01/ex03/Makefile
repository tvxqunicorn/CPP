# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 11:26:24 by xli               #+#    #+#              #
#    Updated: 2021/09/22 13:14:47 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Violence

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

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
