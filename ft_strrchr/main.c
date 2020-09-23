#include <string.h>
#include <stdio.h>

char * ft_strrchr(const char *s, int c);

int main (void)
{
    char str[20] = "aefkshidfxcccc";

    printf("%p\n", strrchr(str, 'x'));
    printf("%p\n", ft_strrchr(str, 'x'));
   
}
