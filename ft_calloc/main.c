#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size);

int main (void)
{
    char *t;
    t = (char *) ft_calloc(2, sizeof(char));
    if (t == 0)
    {
        printf("memoria fallida");
    }
    // printf("calloc: %s\n", ft_calloc(5, sizeof(char)));
    printf("calloc: %i\n", t[0]);
    printf("calloc: %i\n", t[1]);
    printf("calloc: %i\n", t[2]);
    printf("calloc: %i\n", t[3]);
    printf("calloc: %i\n", t[4]);

}
