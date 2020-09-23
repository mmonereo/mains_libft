#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main (void)
{
    char xo [30] = "lorem ipsum dolor sit amet";
   
    int len = 0;
   
    // printf("direccion de retorno ft: %p\n", ft_memmove(xo +1 , xo, sizeof(char) * len));
    // printf("resultado de ft: %s\n", xo);
    // printf("direccion manual: %p\n", &xo[0]);
    printf("direccion de retorno org: %p\n", memmove(xo +1, xo +1, sizeof(char) * len));
    printf("resultado original: %s\n", xo);
    printf("direccion manual: %p\n", &xo[0]);
    

  
}