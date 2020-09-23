#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalnum (int c);

int main (void)
{
    int x = 51;

    printf ("%d\n", isalnum(x));
    printf ("%d\n", ft_isalnum(x));
}