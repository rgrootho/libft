#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

int ft_lstsize(t_list *lst);

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;

	lst1 = (t_list *)malloc(sizeof(t_list));
	lst2 = (t_list *)malloc(sizeof(t_list));
	lst3 = (t_list *)malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;

	printf("this is the number of elements in the list : %d\n",ft_lstsize(lst1));
	return (0);
}
