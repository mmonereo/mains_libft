#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);

int main (void)
{

    
    
    char destino[15] = "buenas";
    const char fuente[30] = "mañanas a veces";

    // printf ("len de destino: %lu\n", strlen(destino));
    // printf ("len de fuente: %lu\n", strlen(fuente));
    // printf ("%s\n", destino);
    // printf("%lu\n",strlcpy(destino, fuente, 0 * sizeof(char)));
    // printf ("%s\n", destino);
    // printf ("len de destino al final: %lu\n", strlen(destino));

    printf ("len de destino: %lu\n", strlen(destino));
    printf ("len de fuente: %lu\n", strlen(fuente));
    printf ("%s\n", destino);
    printf("%lu\n",ft_strlcpy(destino, fuente, 0 * sizeof(char)));
    printf ("%s\n", destino);
    printf ("len de destino al final: %lu\n", strlen(destino));


}