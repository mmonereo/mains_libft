#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n);
int main (void)
{
    char x [20] = "sapete";
    char y [20] = "timazo";
    char * z;
    
    printf("%s\n", y);
    z = ft_memccpy(&y, &x, 'e', 8 * sizeof(char));
    printf("%s\n", y);
    printf("%p\n", z);
    printf("%p\n", &y[1]);
 
    // printf("%s\n", y);
    // memcpy(&y, &x, sizeof(char));
    // printf("%s\n", y);

  
}
