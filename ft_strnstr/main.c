#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main (void)
{
    char str[50] = "lo lor lo aore lorem c la ewelo lor";
    char pek[20] = "c";
    int s = 40;

    printf("resultado de original: %p\n", strnstr(str, pek, s * sizeof(char)));
    printf("direccion manual: %p\n", &str[15]);
    printf("resultado de my strnstr: %p\n", ft_strnstr(str, pek, s * sizeof(char)));
}