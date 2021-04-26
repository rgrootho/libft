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
FLAGS = -Wall -Werror -Wextra
CC = gcc
REMOVE = rm -f

all: $(NAME)

$(NAME): *.o
	ar rc $@ $^

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
	
