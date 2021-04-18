/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 11:22:28 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/18 21:28:22 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*kaas;

	kaas = (t_list *)malloc(sizeof(t_list));
	if (kaas == 0)
		return (NULL);
	kaas->content = content;
	kaas->next = NULL;
	return (kaas);
}
