/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:33:08 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/26 13:44:13 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	intlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	n_is_neg(int n, int numlen, int fd)
{
	char	array[numlen + 2];
	char	chrnbr;

	array[numlen + 1] = '\0';
	array[0] = '-';
	n = n * -1;
	while (n > 0)
	{
		chrnbr = n % 10 + '0';
		array[numlen] = chrnbr;
		numlen--;
		n = n / 10;
	}
	ft_putstr_fd(array, fd);
}

void	n_is_pos(int n, int numlen, int fd)
{
	char	array[numlen + 1];
	char	chrnbr;

	array[numlen] = '\0';
	while (n > 0)
	{
		chrnbr = n % 10 + '0';
		array[numlen - 1] = chrnbr;
		numlen--;
		n = n / 10;
	}
	ft_putstr_fd(array, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	numlen;

	numlen = intlen(n);
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
		n_is_neg(n, numlen, fd);
	else
		n_is_pos(n, numlen, fd);
}
