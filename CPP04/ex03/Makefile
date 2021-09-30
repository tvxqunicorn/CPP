# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 09:22:47 by xli               #+#    #+#              #
#    Updated: 2021/09/23 11:58:37 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = AMateria

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp \
			IMateriaSource.hpp MateriaSource.hpp

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

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
