#include <stdio.h>

char *ft_substr(char const *s, unsigned int start,size_t len);

int main(void)
{
	char a[] = "eva is een stuk worst";
	char *substr = ft_substr(a, 5, 9);

	printf("dit is de tekst die ik moet kopieren: %s\n", a);
	printf("dit is de gekopieerde tekst: %s\n",substr);

//	gcc ft_substr.c ft_memcpy.c main_libft/main_substr.c ft_strlen.c ft_strdup.c ft_strlcpy.c
	
}
