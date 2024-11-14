# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kguillem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 17:19:12 by kguillem          #+#    #+#              #
#    Updated: 2024/11/06 17:19:16 by kguillem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -ggdb
FILES = 
OBJS = $(FILES:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

re : fclean all

clean :
	$(RM) $(OBJS)
fclean :
	$(RM) $(OBJS) $(NAME)
.PHONY: all re clean fclean
