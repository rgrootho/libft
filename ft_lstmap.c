/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 22:48:01 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/07 22:52:04 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list cpy;
	t-list cpy2;

	cpy2 = NULL;
	while (lst)
	{
		cpy = ft_lstnew(*f)(lst->content);
		if (cpy == 0)
			return (0);

	}
}
