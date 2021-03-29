/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 21:48:50 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/01/30 13:13:40 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	lens1;
	size_t	lens2;
	size_t	totlen;

	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	totlen = lens1 + lens2;
	concat = (char*)malloc((totlen + 1) * sizeof(char));
	if (concat == 0)
		return (0);
	ft_strlcpy(concat, s1, (lens1 + 1));
	ft_strlcpy(concat + lens1, s2, (lens2 + 1));
	return (concat);
}
