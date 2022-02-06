RM = rm -f

SUFFIX = ./srcs/

INCLUDES = ./includes/

FLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRC = $(SRCS:%=$(SUFFIX)%)

OBJS = $(SRC:.c=.o)

NAME = libft.a

LIBC = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
$(OBJS): $(SRC)
	$(CC) -c -I$(INCLUDES) -o $@ $< $(FLAGS)

clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
