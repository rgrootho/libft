#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
	char const s[] = "k";
	char c;
	char **array;
	int i;
	c = ' ';
	array = ft_split(s, c);
	i = 0;
	while (i < 1)
	{
		printf("outcome of my function:%s:\n", array[i]);
		i++;
	}
	return (0);
}


/*{
	char s[] = "er zit een muis in mijn koelkast";
	char c;
	int i;

	c = ' ';
	i = 7;

	ft_split(s, c);
	return (0);
}*/
