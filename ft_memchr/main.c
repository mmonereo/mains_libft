#include <string.h>
#include <stdio.h>

void *ft_memchr (const void *s, int c, size_t n);
int main (void)
{
    char x[30] = "buenastardes\n";
    
    printf("%s\n", x);
    printf("%p\n", &x[4]);
    void *z = ft_memchr(x,'a', 10 * sizeof(char));
    printf ("ft_memchar: %p\n", z);
    if (z != NULL)
   {
       printf ("encontrado\n");
   } 
   if (z == NULL)
  {
      printf("no encontrado\n");
  } 
   
	printf("memchar org: %p\n", memchr(x, 'a', 10 * sizeof(char)));
}