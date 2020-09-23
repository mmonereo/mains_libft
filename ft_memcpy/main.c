#include <stdio.h>
#include <string.h>

void *ft_memcpy(void* dst, const void* src, int size);

int main (void)
{
    char x [20] = "cerveza";
    char y [20] = "vino";
    
    printf("%s\n", y);
    ft_memcpy(&y, &x, 5 * sizeof(char));
    printf("%s\n", y);
 
    // printf("%s\n", y);
    // memcpy(&y, &x, 5 * sizeof(char));
    // printf("%s\n", y);

  
}
