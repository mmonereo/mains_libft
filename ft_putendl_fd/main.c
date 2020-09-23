#include <unistd.h>
#include <string.h>

void ft_putendl_fd(char *s, int fd);

int main (void)
{
    char str[30] = "lorem ipsum do\0lor sit amet";

    ft_putendl_fd(str, 1 );
}
