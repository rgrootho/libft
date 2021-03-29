/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 12:07:24 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/26 13:23:33 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = (void*)malloc(count * size);
	if (!a)
		return (0);
	ft_memset(a, 0, count * size);
	return (a);
}
