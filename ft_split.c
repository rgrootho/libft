/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/25 23:12:03 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/18 19:21:15 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	free_swp(char **splt_wrd_p, int j)
{
	while (j >= 0)
	{
		free(splt_wrd_p[j]);
		j--;
	}
	free(splt_wrd_p);
	return (0);
}

static char	*set_word_in_pp(char const *s, int i, int wordlen)
{
	char	*a;

	a = (char *)malloc((wordlen + 1) * sizeof(char));
	if (a == 0)
		return (0);
	ft_strlcpy(a, (s + i - wordlen + 1), wordlen + 1);
	return (a);
}

static char	**cnt_wrdlen(char const *s, char c, char **splt_wrd_p, int wordlen)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] != c && s[i + 1] != '\0')
			wordlen++;
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			splt_wrd_p[j] = set_word_in_pp(s, i, wordlen + 1);
			if (splt_wrd_p[j] == 0)
			{
				free_swp(splt_wrd_p, j - 1);
				return (0);
			}
			wordlen = 0;
			j++;
		}
		i++;
	}
	return (splt_wrd_p);
}

static char	**swp_len(char const *s, char c)
{
	int		i;
	int		words_in_s;
	char	**splt_wrd_p;

	i = 0;
	words_in_s = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			words_in_s++;
		i++;
	}
	splt_wrd_p = (char **)malloc((words_in_s + 1) * sizeof(char *));
	if (splt_wrd_p == 0)
		return (0);
	splt_wrd_p[words_in_s] = 0;
	return (splt_wrd_p);
}

char	**ft_split(char const *s, char c)
{
	char	**splt_wrd_p;
	int		wordlen;

	if (!s)
		return (0);
	wordlen = 0;
	splt_wrd_p = swp_len(s, c);
	if (splt_wrd_p == 0)
		return (0);
	splt_wrd_p = cnt_wrdlen(s, c, splt_wrd_p, wordlen);
	if (splt_wrd_p == 0)
		return (0);
	return (splt_wrd_p);
}
