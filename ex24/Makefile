NAME = libft.a

CC = cc

CFlags = -Wall -Wextra -Werror

Headers = ./includes

SRC = ./srcs/ft_putchar.c \
      ./srcs/ft_putstr.c \
      ./srcs/ft_strcmp.c \
      ./srcs/ft_strlen.c \
      ./srcs/ft_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
