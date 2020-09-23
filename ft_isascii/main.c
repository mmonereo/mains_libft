#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_isascii (int c);

int main (void)
{
    int x = 169;

    printf ("%d\n", isascii(x));
    printf ("%d\n", ft_isascii(x));
}