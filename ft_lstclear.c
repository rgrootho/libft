/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 14:41:14 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/05 15:55:53 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *duim;

	if (!lst || !*lst || !del)
		return ;
	duim = *lst;
	while (duim->next != NULL)
	{
		duim = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = duim;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
	return;
}
