# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 16:12:59 by jhor              #+#    #+#              #
#    Updated: 2025/03/04 16:12:59 by jhor             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
RM = rm -f

SRC = src/ft_print_char.c src/ft_print_digit.c src/ft_print_lower_hexa.c src/ft_print_upper_hexa.c\
src/ft_print_pointer.c src/ft_print_str.c ft_printf.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re