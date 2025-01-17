# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 23:38:05 by snovaes           #+#    #+#              #
#    Updated: 2021/06/02 19:51:16 by snovaes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_memcmp.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c

BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
BONUSOBJS = $(BONUSSRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

bonus:	$(OBJECTS) $(BONUSOBJS)
		ar rc $(NAME) $^

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES) $(BONUSSRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS) $(BONUSOBJS)

clean:
	rm -rf $(OBJECTS) $(BONUSOBJS)

fclean: clean
	rm -fr $(NAME) $(OBJECTS) $(BONUSOBJS) 

re: fclean all