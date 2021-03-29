#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

int main(void)
{
//	char b[] = "kaas";
	char c[] = "kaas";
//	printf("%s\n", memset(b, 90, 6));
	printf("%s\n", ft_memset(c, 90, 6));
	return(0);
}
