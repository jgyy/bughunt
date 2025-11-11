CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
TEST_NAME = test_push_swap

SRC = push_swap.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

test: $(SRC) test.c
	$(CC) $(CFLAGS) -o $(TEST_NAME) $(SRC) test.c
	./$(TEST_NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: all test clean fclean re
