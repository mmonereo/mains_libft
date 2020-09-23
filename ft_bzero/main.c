#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main (void)
{
    char *hilo = "okinawa";
    
    printf("hilo: %s\n ", hilo);
    ft_bzero(hilo, 3 * sizeof(char));
    if (hilo[0] == '\0')
    {
        printf("deleteado\n");
    }
    else
    {
        printf("bzero: %s\n ", hilo);
    }
    
    
}