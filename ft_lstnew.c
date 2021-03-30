/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgrootho <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 11:22:28 by rgrootho      #+#    #+#                 */
/*   Updated: 2021/03/30 12:34:14 by rgrootho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content)
{
	t_list	*kaas;

	kaas = (t_list *)malloc(sizeof(*kaas));
	if (kaas == 0)
		return (NULL);
	kaas->content = content;
	kaas->next = NULL;
	return (kaas);
}
