#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c);

// #1. La cadena de caracteres que hay que trocear.
// #2. El carácter delimitador.

// La tabla con las nuevas cadenas de caracteres que
// resulten del troceado. NULL si falla la reserva de
// memoria.

// Reserva memoria (con malloc(3)) y devuelve un
// array de cadena de caracteres obtenida separando
// ’s’ con el carácter ’c’, que se utiliza como
// delimitador. La tabla debe terminar con NULL.
size_t ft_wordc(char const *s, char c);
size_t ft_wlen( const char * s, char c, size_t * j);
char **ft_split(char const *s, char c);

int main (void)
{
    char *tab;
    unsigned int i;
    size_t j;
    char u;
    size_t wk;
    char ** new;

    u = ' ';
    i = 0;
    j = 0;

    
    
    tab = "   ";
    wk = ft_wordc(tab, u);
    printf("resultado de wk: %zu\n",wk);
    if (!(new = ft_split(tab, u)))
    {
        printf ("fallo en main mane");
    }
    
    while (wk > 0)
    {
        printf("resultado de split%zu: %s\n",j++ ,new[i++]);
        wk--;
    }
    
    
    
}