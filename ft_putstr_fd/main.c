void ft_putstr_fd(char *s, int fd);

int main (void)
{
    char str[20] = "cocolocopataco";

    ft_putstr_fd(str, 1);
}