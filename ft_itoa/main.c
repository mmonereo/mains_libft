#include <stdlib.h>
#include <stdio.h>

// #1. El integer que hay que convertir.
// La cadena de caracteres que representa al integer.
// NULL si falla la reserva de memoria.
// Reserva memoria (con malloc(3)) y devuelve la
// cadena de caracteres que representa el integer
// pasado como argumento. Se deben gestionar los
// números negativos.

char *ft_itoa(int n);

int main(void)
{
    int x = -2147483647;

    printf("resultado de itoa: %s\n", ft_itoa(x));
}