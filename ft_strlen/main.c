#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen (const char *str);

int main (void)
{
    

    char test[] = "honolulu";
    printf ("%lu\n", ft_strlen(test));
    printf ("%lu\n", strlen(test));
}