# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 11:13:09 by xli               #+#    #+#              #
#    Updated: 2021/09/20 12:02:21 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Form

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDES = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
		#RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		#RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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
