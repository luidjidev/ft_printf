# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luisfern <luisfern@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 13:05:46 by luisfern          #+#    #+#              #
#    Updated: 2022/04/19 11:45:52 by luisfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = include
LIBFT = libft
SRC_DIR = src/
OBJ_DIR =  obj/
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs

#Sources

SRC_FILES = ft_printers ft_printf ft_printpointer ft_printutils ft_utoa

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF = .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)

clean: 
	rm -rf obj/
	rm -rf libft/ft_*.o

fclean:
	rm -rf obj/
	rm -rf libft/ft_*.o
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re