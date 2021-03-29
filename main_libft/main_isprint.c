#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main(void)
{
	char c;

	c = 9;
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	return (0);
}
