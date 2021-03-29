/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strrchr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 18:24:00 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/01/23 18:38:25 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if ((char)c == '\0')
			return ((char*)s + i);
		if (s[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	return (0);
}
