#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_isdigit (int c);

int main (void)
{
    int x = 577;

    printf ("%d\n", isdigit(x));
    printf ("%d\n", ft_isdigit(x));
}