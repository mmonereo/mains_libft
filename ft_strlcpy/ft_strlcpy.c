#include <stdio.h>
#include <string.h>


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0;
    size_t x;
    x = 0;

    if (size == 0)
    {
        return (strlen(src));
    }
    
    while (src[x] != '\0' && x < size - 1)
    {
        dst[i] = src[x];
        ++i;
        ++x;
    }
    dst[i] = '\0';
    return (strlen(src));
}