#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main(void)
{
	char string1[] = "        +94";
	int num1;

	num1 = atoi(string1);
	printf("dit is de echte %d\n", num1);
	num1 = ft_atoi(string1);
	printf("dit is de mijne %d\n", num1);

	return(0);
}
