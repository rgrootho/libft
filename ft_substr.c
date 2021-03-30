/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 14:17:32 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/30 11:17:14 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == 0)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = (char *)malloc(len + 1 * sizeof(char));
	if (substr == 0)
		return (0);
	ft_memcpy(substr, (s + start), len);
	substr[len] = '\0';
	return (substr);
}
