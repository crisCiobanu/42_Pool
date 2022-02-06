

RM = rm -f

FLAGS = -Wall -Wextra -Werror

SRCS = main.c ft_atoi.c ft_checkop.c ft_div.c ft_mod.c ft_mult.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_sub.c ft_sum.c 

OBJS = $(SRCS:.c=.o)

NAME = do-op

CC = gcc

all: $(NAME)

.c.o: 
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
