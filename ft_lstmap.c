/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 22:48:01 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/18 21:30:32 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cpy;
	t_list	*head;

	cpy = NULL;
	head = NULL;
	if (!lst)
		return (0);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		if (!head)
			head = new;
		if (cpy)
			cpy->next = new;
		cpy = new;
		lst = lst->next;
	}
	return (head);
}
