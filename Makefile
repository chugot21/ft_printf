# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chugot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 13:53:34 by chugot            #+#    #+#              #
#    Updated: 2023/04/14 19:16:02 by chugot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_*.c \

CC = gcc

CFLAGS += -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -c $(SRCS)
			ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME) $(OBJS)

re: 		fclean $(NAME)

.PHONY:	all clean fclean re
