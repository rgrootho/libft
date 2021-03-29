#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main(void)
{
	char s[] = "wie heeft er zin in videogames?!";
	char b[] = "wie heeft er zin in videogames?!";
	 printf("%s\n", ft_strchr(s, 'e'));
	 printf("%s\n", strchr(b, 'e'));
}
