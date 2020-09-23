#include <string.h>
#include <stdio.h>

char * ft_strchr(const char *s, int c);

int main (void)
{
    char str[20] = "bonjour";

    printf("%p\n", strchr(str, 'c'));
    printf("%p\n", ft_strchr(str, 'c'));
   
}
