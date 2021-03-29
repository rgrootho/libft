/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:46:50 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/26 14:04:03 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	a;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	a = dstlen;
	if (a > dstsize)
		return (srclen + dstsize);
	while (src[i] != '\0' && a < dstsize - 1 && dstsize != 0)
	{
		*(dst + a) = *(src + i);
		i++;
		a++;
	}
	*(dst + a) = '\0';
	return (dstlen + srclen);
}
