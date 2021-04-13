#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

void ft_lstadd_back(t_list **lst, t_list *new);

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	t_list *new;
	t_list **lst;
	t_list *cpy;
	int i;

	lst1 = (t_list *)malloc(sizeof(t_list));
	lst2 = (t_list *)malloc(sizeof(t_list));
	lst3 = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	lst = &lst1;

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;
	new->content = "droppie";
	

	ft_lstadd_back(lst, new);
	
	i = 1;
	cpy = lst1;
	while (cpy->next != NULL)
	{
		cpy = cpy->next;
		i++;
	}
	printf("dit is de hoeveelheid elementen baby : %d\n", i);
	
	cpy = lst1;
	while (cpy->next != NULL)
		cpy = cpy->next;
	printf("dit is content in het laatste element : %s\n",cpy->content);
	return (0);
}
