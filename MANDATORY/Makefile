# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 20:37:56 by yoel-bas          #+#    #+#              #
#    Updated: 2023/04/01 04:37:13 by yoel-bas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
HEADER = so_long.h
# HEADERB = so_long_bonus.h
# NAMEB = so_long_bonus

SRC = ft_bzero.c \
	  ft_calloc.c \
	  ft_memset.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_strcmp.c \
	  ft_strdup.c \
	  ft_strlen.c \
	  ft_substr.c \
	  ft_wrong.c \
	  get_next_line.c \
	  map_name.c \
	  so_long.c \
	  ft_strjoin.c \
	  parsing.c \
	  parsing1.c \
	  valid_map.c \
	  parsing_main.c \
	  sl_window.c \
	  parsing.backtracking.c \
	  move.c \
	  draw.c \
	  parsing2.c 
	  
# BSRC = ft_bzero.c \
# 	  ft_calloc.c \
# 	  ft_memset.c \
# 	  ft_split.c \
# 	  ft_strchr.c \
# 	  ft_strcmp.c \
# 	  ft_strdup.c \
# 	  ft_strlen.c \
# 	  ft_substr.c \
# 	  ft_wrong.c \
# 	  get_next_line.c \
# 	  map_name.c \
# 	  so_long_bonus.c \
# 	  ft_strjoin.c \
# 	  parsing.c \
# 	  parsing1.c \
# 	  valid_map.c \
# 	  parsing2.c \
# 	  sl_window.c \
# 	  parsing.backtracking.c \
# 	  move.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit -g
RM = rm -rf

all: $(NAME)

# bonus : $(NAMEB)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# $(NAMEB): $(BSRC) $(HEADERB)
# 	$(CC) $(CFLAGS) $(BSRC) -o $(NAMEB)

clean:
	$(RM) $(NAME) $(NAMEB)

fclean: clean
	$(RM) 

re: fclean all