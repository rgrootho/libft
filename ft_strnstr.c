/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 20:22:14 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/01/30 13:07:39 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;
	size_t nelen;

	i = 0;
	j = 0;
	nelen = ft_strlen(needle);
	if (!needle || nelen == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		k = i;
		while (haystack[k] == needle[j] && len > k && haystack[i])
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + (k - j));
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
