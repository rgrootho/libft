#include <stdio.h>

char	**ft_split(char const *s, char c);

int main(void)
{
	char const s[] = "";
	char c = ' ';
	char **array;

	array = ft_split(s, c);
	printf("dit is array 1:%s\n",array[0]);
	printf("dit is array 2:%s\n",array[1]);
	printf("dit is array 3:%s\n",array[2]);
	printf("dit is array 4:%s\n",array[3]);
	printf("dit is array 5:%s\n",array[4]);
	printf("dir is array 6:%s\n",array[5]);
	printf("dir is array 7:%s\n",array[6]);
	printf("dir is array 8:%s\n",array[7]);
	printf("dir is array 9:%s\n",array[8]);

	return(0);
}
