# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 16:57:21 by rbouchar          #+#    #+#              #
#    Updated: 2022/11/02 18:48:43 by rbouchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_putunbr_fd.c ft_putptr_fd.c ft_putxnbr_fd.c \
			ft_putgxnbr_fd.c ft_putchar_pf.c ft_putstr_pf.c ft_putnbr_pf.c

OBJS 	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

AR		= ar rc

FLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	libft/libft.a ${OBJS}
			cp $< $@
			${AR} $@ ${OBJS}

clean:		
			${RM} ${OBJS}
			${MAKE} -C libft clean

fclean:		clean
			${RM} ${NAME}
			${MAKE} -C libft fclean

re:			fclean all

libft/libft.a:
	${MAKE} -C libft

.PHONY:		all clean fclean re
