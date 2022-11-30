# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:41:41 by mshchuts          #+#    #+#              #
#    Updated: 2022/11/30 11:53:54 by mshchuts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strncmp.c ft_isprint.c ft_memchr.c ft_strlen.c ft_atoi.c ft_memcmp.c \
	ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c 

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	ft_lstmap.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

CC = cc

CFLAGS = -c -Wall -Wextra -Werror

ARSR = ar -sr

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(SRC)
	$(ARSR) $(NAME) $(OBJ)

bonus: $(BOBJ)
	$(ARSR) $(NAME) $?

clean: 
	$(REMOVE) $(OBJ) $(BOBJ)

fclean:
	$(REMOVE) $(OBJ) $(BOBJ) $(NAME)

re: fclean all

.PHONY: clean fclean all re
