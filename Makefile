# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rgrootho <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 11:32:58 by rgrootho      #+#    #+#                  #
#    Updated: 2021/04/26 18:45:01 by rgrootho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
MANPART = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

MANOBJ = $(MANPART:.c=.o)
BONOBJ = $(BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = gcc
REMOVE = rm -f

bonus: $(MANOBJ) $(BONOBJ)
	ar rsc $(NAME) $^
	
all: $(NAME)

$(NAME): $(MANOBJ)
	ar rsc $@ $^




%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

#%.o: %.c $(HEADER)
#	$(CC) $(CFLAGS) -c $<

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
	
