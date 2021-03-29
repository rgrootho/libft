#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
	char dst[9];
	char dst1[9];
	char src[0];
	char src1[0];
	size_t ret = ft_strlcpy(dst, src, 0);
	size_t ret1 = strlcpy(dst1, src1, 0);
	printf("%zu\n", ret);
	printf("%zu\n", ret1);
	printf("%s\n", dst);
	printf("%s\n", dst1);
}
