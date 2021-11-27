# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 15:46:00 by mmohamme          #+#    #+#              #
#    Updated: 2021/11/23 00:44:12 by mmohamme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC    =ft_isalpha.c    \
        ft_memchr.c    \
        ft_memset.c    \
        ft_strjoin.c    \
        ft_strncmp.c    \
        ft_substr.c    \
        ft_bzero.c    \
        ft_isascii.c    \
        ft_strlcat.c    \
        ft_tolower.c    \
        ft_calloc.c    \
        ft_isdigit.c    \
        ft_memcpy.c    \
        ft_strchr.c    \
        ft_strlcpy.c    \
        ft_strrchr.c    \
        ft_toupper.c    \
        ft_isalnum.c    \
        ft_isprint.c    \
        ft_memmove.c    \
        ft_strdup.c    \
        ft_strlen.c    \
        ft_strtrim.c    \
		ft_atoi.c    \
		ft_strnstr.c    \
		ft_strmapi.c    \
		ft_memcmp.c    \
		ft_itoa.c    \
		ft_putchar_fd.c    \
		ft_putstr_fd.c    \
		ft_putendl_fd.c    \
		ft_putnbr_fd.c    \
		ft_split.c    \
		ft_striteri.c    \
		
	
SRCB   =ft_lstadd_front.c     \
		ft_lstsize.c    \
		ft_lstlast.c    \
		ft_lstadd_back.c    \
		ft_lstdelone.c    \
		ft_lstclear.c    \
		ft_lstiter.c    \
		ft_lstmap.c    \
		ft_lstnew.c    \

OBJS = $(SRC:.c=.o)

OBJSB = $(SRCB:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

IDIR = libft.h

$(NAME): $(OBJS) $(IDIR)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJSB) $(OBJS) $(IDIR)
	ar rcs $(NAME) $(OBJSB) $(OBJS)

all: $(NAME)

clean: 
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re
