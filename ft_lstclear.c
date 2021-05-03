/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 14:41:14 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/04/18 21:33:35 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_save;

	if (!lst || !*lst || !del)
		return ;
	lst_save = *lst;
	while (lst_save->next != NULL)
	{
		lst_save = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_save;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
	return ;
}
