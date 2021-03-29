#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c);

int main(void)
{
	int c;
	char b;

	c = 2;
	b = '7';
	printf("dit is isdigit %d\n", isdigit(b));
	printf("dit is ft_isdigit %d\n", ft_isdigit(b));
}