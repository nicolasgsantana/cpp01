NAME = violence
SRC_DIR = src
INC_DIR = inc

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I$(INC_DIR)

SRC = $(addprefix src/,	HumanA.cpp \
						HumanB.cpp \
						Weapon.cpp \
						main.cpp \
						)
HEADER = $(addprefix inc/,	HumanA.hpp \
							HumanB.hpp \
							Weapon.hpp \
						)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
