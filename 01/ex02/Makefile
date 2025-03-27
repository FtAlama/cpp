# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alama <alama@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 16:00:40 by alama             #+#    #+#              #
#    Updated: 2025/03/27 16:09:17 by alama            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain_ref

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all fclean clean re
