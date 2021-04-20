/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/20 15:38:47 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/20 16:51:24 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	nlen(int n)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	while (i > 0)
	{
		pow = pow * 10;
		i--;
	}
	return (pow / 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	num2char;
	int		pow;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	pow = nlen(n);
	num2char = n / (pow) + '0';
	write(fd, &num2char, 1);
	n = n % pow;
	if (n > 0)
		ft_putnbr_fd(n, fd);
	return ;
}
