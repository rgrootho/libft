#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int main(void)
{
	char c;

	c = 'I';
	printf("%d\n", tolower(c));
	printf("%d\n", ft_tolower(c));
	return(0);
}
