#include <stdio.h>
#include <string.h>

int        ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    const char s1[0] = "";
    const char s2[3] = "pip";
    printf("%d\n", ft_strncmp(s1, s2, 15));
    printf("%d\n",strncmp(s1, s2, 15));
}
