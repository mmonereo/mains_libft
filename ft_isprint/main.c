#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_isprint (int c);

int main (void)
{
    int x = 51;

    printf ("%d\n", isprint(x));
    printf ("%d\n", ft_isprint(x));
}