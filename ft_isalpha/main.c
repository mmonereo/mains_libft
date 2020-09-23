#include <libc.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalpha (int c);

int main (void)
{
    int x = 113;

    printf ("%d\n", isalpha(x));
    printf ("%d\n", ft_isalpha(x));
}