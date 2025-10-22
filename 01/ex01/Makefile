NAME = horde_zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Zombie.cpp zombieHorde.cpp 

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

OBJ_DIR = build

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all fclean clean re
