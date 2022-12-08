# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbouchar <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 16:57:21 by rbouchar          #+#    #+#              #
#    Updated: 2022/10/27 20:48:05 by rbouchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c ft_atoi.c \
			ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_bzero.c \
			ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c \
			ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c \
			ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalpha.c \
			ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_isascii.c \
			ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c

SRCSB	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJS 	= ${SRCS:.c=.o}

OBJB	= ${SRCSB:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

AR		= ar rc

FLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS} ${OBJB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBJB}
			${AR} ${NAME} ${OBJS} ${OBJB}	

.PHONY:		all clean fclean re
