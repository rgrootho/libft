#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

t_list *ft_lstnew(void *content);

int main(void)
{
	char yoghurt[] = "hey daar vriendelijke vriend";
	t_list *maagdarm;

	maagdarm = ft_lstnew(yoghurt);
	printf("dit is maagdarm->content : %s\n", maagdarm->content);
//	printf("dit is kaas->next : %d\n", maagdarm->next);

	return (0);
}
