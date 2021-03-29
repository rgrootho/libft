#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int main(void)
{
	char c;

	c = 012;
	printf("%d\n",isascii(c));
	printf("%d\n", ft_isascii(c));

}
