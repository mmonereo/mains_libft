#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_tolower (int c);

int main (void)
{
    int x = 'Z';

    printf ("%c\n", tolower(x));
    printf ("%c\n", ft_tolower(x));
}