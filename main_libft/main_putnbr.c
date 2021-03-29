#include <stddef.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd);

int main(void)
{
	int n;


	n = -12;
	ft_putnbr_fd(n, 1);
	return (0);
}
//gcc -Wall -Wextra -Werror ft_putnbr_fd.c ft_putstr_fd.c main_libft/main_putnbr.c ft_putchar_fd.c
