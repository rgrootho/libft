#include <stdio.h>

void	ft_putnbr_fd(int n, int fd);
int main(void)
{
	int a = -2147483648;

	while (a < 2147483647)
	{
		ft_putnbr_fd(a, 1);
		a++;
	}	
	return (0);
}
