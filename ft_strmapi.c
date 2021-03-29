/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:40:43 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/01/15 19:46:53 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	size_t slen;
	char *cpy;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	cpy = (char*) malloc ((slen + 1) * sizeof (char));
	if (!cpy)
		return(0);
	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = f(i, s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
