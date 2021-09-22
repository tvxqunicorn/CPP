# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 12:22:36 by xli               #+#    #+#              #
#    Updated: 2021/09/22 15:27:26 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

INCLUDES = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

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
