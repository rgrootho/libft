#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

int main(void)
{
	char src[] = "thx to ntoniolo for this test !";
	char dst[3];
	char src1[] = "thx to ntoniolo for this test !";
	char dst1[3];

	printf("dit is de mijne;\n");
//	ft_strlcat(dst, src, 4);
//	printf("%s\n", dst);
	printf("%zu\n",ft_strlcat(dst, src, 4));
	printf("dit is de echte;\n");
	//strlcat(dst1, src1, 4);
	//printf("%s\n", dst1);
	printf("%zu\n", strlcat(dst1, src1, 4));
}
