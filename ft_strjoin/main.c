#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);

// #1. La cadena de caracteres prefijo.
// #2. La cadena de caracteres sufijo.
// Reserva memoria (con malloc(3)) y devuelve la
// nueva cadena de caracteres que resulta de la
// concatenación de ’s1’ y ’s2’.

int main(void)
{
    char const prefijo[30] = "honolulu";
    char const sufijo[30] = "okinawa";

    printf("nueva cadena: %s\n", ft_strjoin(prefijo, sufijo));
}