#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
/*	char src[] = "ik vind kaas niet zo lekker";
	char dst[20];
	char src1[] = "ik vind kaas niet zo lekker";
	char dst1[20];
*/
	printf("%s\n", memcpy(NULL, NULL, 3));
	printf("%s\n", ft_memcpy(NULL, NULL, 3));
}
