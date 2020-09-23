#include <libc.h>
#include <stdio.h>

int ft_atoi (const char *str);

int main (void)
{
    const char a[20] = "\t\n\r\v\f543-469 \n";
    printf("atoi original: %d\n", atoi(&a[0]));
    printf("my atoi: %d\n", ft_atoi(&a[0]));
}