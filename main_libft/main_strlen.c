#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

int main(void)
{
	char str[] = "woof woof ik ben een hondje";
	printf("%zu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
}
