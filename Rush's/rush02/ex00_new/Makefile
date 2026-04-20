NAME	= rush-02

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c ft_utils.c ft_utils2.c str_tools.c file_io.c dict.c parse.c convert_utils.c convert.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
