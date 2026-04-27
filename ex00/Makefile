NAME = 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =
INC =

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
