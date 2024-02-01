# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 18:23:28 by hel-ouar          #+#    #+#              #
#    Updated: 2023/01/18 18:18:50 by hel-ouar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

SRCS = main.c checkError.c utils.c lst.c simple_sort.c ft_atoi_push_swap.c\
		radix.c rotate.c rrotate.c swap.c push.c simple_sort_2.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

HEAD = push_swap.h

%.o: %.c Makefile ${HEAD}
		${CC} ${FLAGS} -Ilibft -c $< -o $@

all: libft $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) libft/libft.a -o $(NAME)

clean:
	$(RM) $(OBJS)
	${MAKE} clean -C Libft/

libft :
	${MAKE} -C libft/

fclean: clean
	$(RM) $(NAME)
	${MAKE} fclean -C Libft/

re: fclean $(NAME)

.PHONY:	all clean fclean re bonus libft
