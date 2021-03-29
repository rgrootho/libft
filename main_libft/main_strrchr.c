#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main(void)
{
	char s[] ="de beer is rond";
	printf("%s\n", ft_strrchr(s, ' '));
	printf("%s\n", strrchr(s, ' '));
}