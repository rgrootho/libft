#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char str[] = "qqqppqq";
	char set[] = "q";

	printf("%s\n",ft_strtrim(str, set));
	return (0);
}
