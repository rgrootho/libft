#include <stdio.h>

char *ft_strdup(const char *s1);

int main(void)
{

	char s1[] = "ik doe een testje";
	char *copy = ft_strdup(s1);

	printf("this is s1 %s\n",s1);
	printf("this is copy %s\n",copy);
}
