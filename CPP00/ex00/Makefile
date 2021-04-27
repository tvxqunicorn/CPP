NAME = Megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = Megaphone.cpp

OBJS = $(SRCS:.cpp = .o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS)
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
