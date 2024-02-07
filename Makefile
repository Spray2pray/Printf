# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbamatra <mbamatra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 19:04:10 by mbamatra          #+#    #+#              #
#    Updated: 2024/01/28 21:02:11 by mbamatra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_characters.c \
	  ft_printdigit.c \
	  ft_printstring.c \
	  ft_printhex.c \
	  ft_printpointer.c \
	  ft_print_unsigned_digit.c \
	  ft_strchr.c 
	
OBJ = $(SRC:.c=.o) 

CC = cc 

CFLAGS = -Wall -Werror -Wextra 

DEL = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	$(DEL) $(OBJ) 

fclean: clean
	$(DEL) $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean re
