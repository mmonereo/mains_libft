#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_toupper (int c);

int main (void)
{
    int x = '9';

    printf ("%c\n", toupper(x));
    printf ("%c\n", ft_toupper(x));
}