/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/26 14:21:44 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/26 16:17:55 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	nchar;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n < 10)
	{
		nchar = n + '0';
		write(fd, &nchar, 1);
		return ;
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		nchar = (n % 10) + '0';
		write(fd, &nchar, 1);
		return ;
	}
}
