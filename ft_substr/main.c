#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

// #1. La cadena de la que se extrae la nueva cadena
// #2. El índice del principio de la nueva cadena
// #3. El tamaño máximo de la nueva cadena.
// Reserva memoria (con malloc(3)) y devuelve la
// cadena de caracteres que proviene de la cadena
// pasada como argumento.
// Esta nueva cadena comienza en el índice ’start’ y
// tiene como tamaño máximo ’len’

int main (void)
{
    char grande[40] = "--lorem-ipsum---dolor---sit-amet-";
    printf("resultado printf de ft = %s\n",ft_substr(grande, 16, 5 * sizeof(char)));
    // puts(ft_substr(grande, 4, 5 * sizeof(char)));
}