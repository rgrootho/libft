#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	f(unsigned int a, char b)
{
	b = b - 32;
	a = 0;
	return (b);
}

int main(void)
{
	
	char str[] = "kippetjes";

	printf("%s\n",ft_strmapi(str, (*f)));
	return(0);
}
