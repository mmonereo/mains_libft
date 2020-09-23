#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

// #1. La cadena de caracteres que hay que depurar.
// #2. El set de referencia de caracteres que hay que
// retirar.
// Reserva memoria (con malloc(3)) y devuelve la
// cadena de caracteres que es una copia de ’s1’, sin
// los caracteres indicados en el ’set’ al principio y
// al final de la cadena de caracteres.
// sacar s1 de entre todos los caracteres de set.

int main (void)
{
    char piscina[60] = "cjkfkjcfjkcjckaguakjckcfjck";
    char const set[10] = "cjkf";

    printf("cadena depurada:%s\n", ft_strtrim(piscina, set));

}
