#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char s[] = "ik test feen functie fuit";
	printf("%s\n", ft_memchr(s, 'f', 17));
	return(0);
}