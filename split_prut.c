/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/27 14:15:28 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/04 11:32:40 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	free_pp(char **pp, int j)
{
	if (pp)
	{
	
		while(j >= 0)
	
		{
	
			free(pp[j]);
			j--;
		}
		free(pp);
		return ;
	}		
}

int	set_word_in_pp(const char *s, char *pp_j, int i, int wordlen)
{
	printf("kaasbaas\n");
	pp_j = (char*)malloc((wordlen + 1) * sizeof(char));
	if (pp_j == 0)
		return (0);
	printf("jo gasten, welkom in mijn ouders huis bro");
	ft_strlcpy(pp_j, &s[i - wordlen + 1], wordlen + 1);
	return (1);
}

char **pp_len(char const *s, char c)
{
	int i;
	int words_in_s;
	char **pp;

	i = 0;
	words_in_s = 0;
	while(s[i] != '\0')
	{
		if ((s[i + 1] == c && s[i] != c) || (s[i] != c && s[i + 1] == '\0'))
			words_in_s++;
		i++;
	}
	printf("dit is words_in_s: %d\n",words_in_s);
	pp = (char**)malloc((words_in_s + 1) * sizeof (char*));
	if (pp == 0)
		return (0);
	pp[words_in_s] = 0;
	return (pp);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int wordlen;
	char **pp;

	i = 0;
	j = 0;
//	if ((pp = pp_len(s, c)) == 0)
//		return (0);
	pp = pp_len(s, c);
	if (pp == 0)
		return (0);
	while (pp[j] != 0) //!!!!
	{
		if (s[i] != c && s[i + 1] != c)
			wordlen++;
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			if (set_word_in_pp(s, *(pp + j), i, wordlen + 1) == 0)
			{
				free_pp(pp, j);
				return (0);
			}
			j++;
			wordlen = 0;
		}
		i++;
		printf("wordlen %d i %d j %d\n ",wordlen, i, j);
	}
	return (pp);
}
