# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 22:09:04 by mel-gand          #+#    #+#              #
#    Updated: 2022/11/08 22:09:08 by mel-gand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
SRC = ft_push_swap.c ft_atoi.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_substr.c ft_isdigit.c ft_push_instructions.c ft_sorting.c ft_memcmp.c ft_sort_algo.c ft_sort_algo2.c ft_sort_algo3.c ft_input.c ft_double.c
OBJ = $(SRC:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROGRAM)
%.o:%.c ft_push_swap.h
	@$(CC) -c $< -o $@

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(PROGRAM)
re: fclean all

.PHONY: all clean re
