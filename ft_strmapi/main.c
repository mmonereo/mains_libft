#include<stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char ft_f(unsigned int x, char y)
{
    char res = 0;
    res = x + y;
    return (res);
}

int main(void)
{
    char const tab[20] = "123451";
    char *new;

    new = ft_strmapi(tab, ft_f);

    printf("nueva tabla: %s\n", new);

}