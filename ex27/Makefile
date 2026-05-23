NAME = ft_display_file

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

#%.o: %.c
#	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
