/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 12:25:34 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/26 17:47:29 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	i = ft_strlen(s1) + 1;
	p = (char *)malloc(i * sizeof(char));
	if (p == 0)
		return (0);
	ft_strlcpy(p, s1, i);
	return (p);
}
