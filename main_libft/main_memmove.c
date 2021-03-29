#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
	char dst[] = "rode kippen eten kaas";
	char dst1[] = "rode kippen eten kaas";
//	char src[] = "gele koeien eten prut";
//	char src1[] = "gele koeien eten prut";
	
	printf("dst before memmove = %s\n", dst);
	printf("dst aftr ft_memmove = %s\n", ft_memmove(dst + 3, dst,19));
	printf("dst after memmove = %s\n", memmove(dst1 + 3, dst1, 19));
}
