#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
	char mainstring[] = "MZIRIBMZIRIBMZE123";
	char substring[] = "MZIRIBMZE";

	printf("%s\n", ft_strnstr(mainstring, substring, 17));
	printf("%s\n", strnstr(mainstring, substring, 17));
}
