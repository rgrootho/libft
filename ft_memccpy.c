/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 16:45:40 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/26 13:30:09 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		if ((unsigned char)c == *(unsigned char *)(src + i))
			return (dst + i + 1);
		i++;
	}
	return (0);
}
