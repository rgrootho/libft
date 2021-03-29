/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 23:12:03 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/26 17:52:50 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	free_pp(char **pp, int j)
{
	while (j >= 0)
	{
		free(pp[j]);
		j--;
	}
	free(pp);
	return (0);
}

char	*set_word_in_pp(char const *s, int i, int wordlen)
{
	char	*a;

	a = (char *)malloc((wordlen + 1) * sizeof(char));
	if (a == 0)
		return (0);
	ft_strlcpy(a, (s + i - wordlen + 1), wordlen + 1);
	return (a);
}

char	**pp_len(char const *s, char c)
{
	int		i;
	int		words_in_s;
	char	**pp;

	i = 0;
	words_in_s = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			words_in_s++;
		i++;
	}
	printf("dit is words_in_s: %d\n",words_in_s);
//	if (words_in_s == 0)
//		return (0);
	pp = (char **)malloc((words_in_s + 1) * sizeof(char *));
	if (pp == 0)
		return (0);
	pp[words_in_s] = 0;
	return (pp);
}

char	**gedoe(char const *s, char c, char **pp, int wordlen)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')//(j != 2)//(pp[j] != 0)
	{
		if (s[i] != c && s[i + 1] != c && s[i + 1] != '\0')
			wordlen++;
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			printf("dit is wordlen %d: %d\n",j ,i);
			pp[j] = set_word_in_pp(s, i, wordlen + 1);
			if (pp[j] == 0)
			{
				printf("dir is niet goed");
				free_pp(pp, j - 1);
				return (0);
			}
			wordlen = 0;
			j++;
		}
		i++;
	}
	return (pp);
}

char	**ft_split(char const *s, char c)
{
	char	**pp;
	int		wordlen;

	wordlen = 0;
	pp = pp_len(s, c);

	if (pp == 0)
	{
		printf("dit is slecht");
		return (0);
	}
	pp = gedoe(s, c, pp, wordlen);
	if (pp == 0)
	{
		printf("dit is ook slecht");
		return (0);
	}
	return (pp);
}
