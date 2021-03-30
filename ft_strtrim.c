/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/10 13:14:56 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/30 11:16:32 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	fronttrim(char const *s1, char const *set, size_t setindex)
{
	size_t	i;
	size_t	sires;

	i = 0;
	sires = setindex;
	while (s1[i] != '\0' && setindex != 0)
	{
		if (s1[i] == set[setindex - 1])
		{
			setindex = sires;
			i++;
		}
		else
			setindex--;
	}
	return (i);
}

static size_t	backtrim(char const *s1, char const *set, size_t setindex)
{
	size_t	i;
	size_t	sires;
	size_t	strlen;

	i = 0;
	sires = setindex;
	strlen = ft_strlen(s1);
	while (strlen != 0 && setindex != 0)
	{
		if (s1[strlen - 1] == set[setindex - 1])
		{
			strlen--;
			setindex = sires;
		}
		else
			setindex--;
	}
	return (strlen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	setlen;
	size_t	start;
	size_t	end;
	char	*strcopy;

	if (!s1)
		return (0);
	setlen = ft_strlen(set);
	start = fronttrim(s1, set, setlen);
	end = backtrim(s1, set, setlen);
	if (start > end)
	{
		strcopy = (char *)malloc(sizeof(char));
		if (!strcopy)
			return (0);
		strcopy[0] = '\0';
	}
	else
	{
		strcopy = (char *)malloc((end - start + 1) * sizeof(char));
		if (!strcopy)
			return (0);
		ft_strlcpy(strcopy, s1 + start, end - start + 1);
	}
	return (strcopy);
}
