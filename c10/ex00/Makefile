

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRCS = main.c

OBJS = $(SRCS:.c=.o)

NAME = ft_display_file

CC = gcc

all: $(NAME)

.c.o: 
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -L. -lft -o $(NAME)
clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
