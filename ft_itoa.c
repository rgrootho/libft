/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 15:27:31 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/26 17:48:05 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*prutzooi(char *chrstr, size_t intlen, int n)
{
	chrstr[intlen] = '\0';
	intlen--;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			chrstr[intlen] = '8';
			intlen--;
			n = n / 10;
		}
		n = n * -1;
		chrstr[0] = '-';
	}
	if (n == 0)
		chrstr[intlen] = '0';
	while (n > 0)
	{
		chrstr[intlen] = n % 10 + '0';
		n = n / 10;
		intlen--;
	}
	return (chrstr);
}

char	*ft_itoa(int n)
{
	size_t	intlen;
	int		lenn;
	char	*chrstr;

	lenn = n;
	intlen = 0;
	if (n == 0)
		intlen = 1;
	while (lenn != 0)
	{
		lenn = lenn / 10;
		intlen++;
	}
	if (n < 0)
		intlen++;
	chrstr = (char *)malloc((intlen + 1) * sizeof(char));
	if (chrstr == 0)
		return (0);
	return (prutzooi(chrstr, intlen, n));
}
