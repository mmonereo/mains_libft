#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s);

int main (void)
{
    const char f[20] = "2";

    printf("resultado de ft: %s\n", ft_strdup(f));
    printf("resultado org: %s\n", strdup(f));
}
