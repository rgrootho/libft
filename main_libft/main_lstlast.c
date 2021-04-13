#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

t_list *ft_lstlast(t_list *lst);

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	t_list *cpy;

	lst1 = (t_list *)malloc(sizeof(t_list));
	lst2 = (t_list *)malloc(sizeof(t_list));
	lst3 = (t_list *)malloc(sizeof(t_list));
	
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->content = "saus?";
	lst3->next = NULL;

	cpy = ft_lstlast(lst1);
	printf("dit is cpy->content : %s\n",cpy->content);
	return (0);
}
