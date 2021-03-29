#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

int main(void)
{
	char c;

	c = 'u';
	printf("%d\n", toupper(c));
	printf("%d\n", ft_toupper(c));
	return(0);
}
