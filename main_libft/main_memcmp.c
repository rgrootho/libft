#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	char s1[] = "bbcd";
	char s2[] = "bbcd";
	printf("%d\n",ft_memcmp(s1, s2, 4));
	return(0);
}
