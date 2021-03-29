#include "stdio.h"

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char s1[] = "er zit een slang in mijn laars";
	char s2[] = "ik lust wel een sappige appel";
	char *p = ft_strjoin(s1, s2);
	printf("%s\n", p);
	return (0);
}
