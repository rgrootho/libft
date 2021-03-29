#include <stdio.h>

int ft_isalnum(int c);

int main(void)
{
	char c;

	c = '&';
	printf("%d\n", ft_isalnum(c));
	return(0);
}
