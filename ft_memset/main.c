#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len);
int main (void)
{
    char x[30] = "buenastardes\n";
    int y[] = {4,3,2,3,4,5,6};
    printf("%s\n", x);
    printf("%p,\n", &x[0]);
    void *z = ft_memset(x,'0', 4 * sizeof(char));
    

    // printf("%s\n", memset(x,'8', 6));

    // memset(x,'8', 6);xw
    // puts(x);
    
    printf("%s\n", ft_memset(x,'8', 7 * sizeof(char)));
    printf("%p\n", z);
    
    
    printf("%d\n", y[1]);
    printf("%s\n", ft_memset(&y[0],'0', 4 * sizeof(int)));
    printf("%d\n", y[1]);
}
