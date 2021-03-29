#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char a[] ="kaas";
	char b[] ="kaas";
	printf( "%s \n", a);
	ft_bzero(a, 5);
	printf( "%s \n", a);
	printf("%s\n", b);
	bzero(b, 5);
	printf("%s\n", b);
	
}
