#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n);

int main(void)
{
	char arr1 [] = "ik heb een kriebel";
	char arr2[30];
	ft_memccpy(arr2, arr1, 'b', 20);
	printf("%s\n",arr2);
	return (0);
}

//printf("%d\n",c);
//printf("%c\n", (unsigned char)c);
//printf("%s\n", dst);
