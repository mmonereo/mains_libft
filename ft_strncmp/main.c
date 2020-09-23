
#include <stdio.h>
#include <string.h>

int ft_strncmp (const char *s1, const char *s2, size_t n);

int main (void)
{
    int n = 7;
    const char x[20] = "test";
    const char y[20] = "testss";

    printf ("resultado de strncmp: %d\n", strncmp(x, y, n));
    printf ("my strncmp: %d\n", ft_strncmp(x, y, n));
}