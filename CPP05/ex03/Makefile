# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 11:13:09 by xli               #+#    #+#              #
#    Updated: 2021/10/06 13:14:12 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Intern

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
		RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
