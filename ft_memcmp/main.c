#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main (void)
{
    char primera[20] = "faraffl";
    char segunda[20] = "farafil";

    printf("resultado ft es: %d\n", ft_memcmp(primera, segunda, 5 * sizeof(char)));
    printf("resultado org es: %d\n", memcmp(primera, segunda, 5 * sizeof(char)));

    // int i1[] = {0,3};
    // int i2[] = {0,4};

    // printf("resultado es: %d\n", ft_memcmp(i1, i2, 2 * sizeof(int))); 
}