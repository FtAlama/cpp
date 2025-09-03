# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alama <alama@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 16:00:40 by alama             #+#    #+#              #
#    Updated: 2025/03/26 21:39:18 by alama            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = simple_clap_trap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp Fixed_overload.cpp Point.cpp

OBJ = $(SRC:/%.cpp=$(OBJ_DIR)/%.o)

OBJ_DIR = obj

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean :
	@rm -f $(OBJ_DIR)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all fclean clean re
