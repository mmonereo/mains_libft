#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main (void)
{
    size_t destlen = 15;
    
    
    char *destino = (char *)malloc(sizeof(char) * destlen);
    const char fuente[13] = "lorem";

    memset(destino, 0, destlen);
	memset(destino, 'r', 6);
    
    printf("strlcat\n");
    printf ("len de destino: %lu\n", strlen(destino));
    printf ("len de fuente: %lu\n", strlen(fuente));
    printf ("%s\n", destino);
    printf("retorno: %lu\n",strlcat(destino, fuente, 15 * sizeof(char)));
    printf ("%s\n", destino);
    printf ("len de destino al final: %lu\n", strlen(destino));
    
    // printf("my strlcat\n");
    // printf ("len de destino: %lu\n", strlen(destino));
    // printf ("len de fuente: %lu\n", strlen(fuente));
    // printf ("%s\n", destino);
    // printf("retorno: %lu\n",ft_strlcat(destino, fuente, destlen * sizeof(char)));
    // printf ("%s\n", destino);
    // printf ("len de destino al final: %lu\n", strlen(destino));


}