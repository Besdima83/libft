#include <stdio.h>
char* ft_strchr(const char *s, int c)
{
    char ch;
    ch = (char) c;
    char* arr;
    arr = (char *) s;

    while (*arr++ != '\0')
        if (*arr == ch)
            return (char *) (*s);
    return (NULL);
}

int main() {
    char str[10] = "bespalov";
    printf("Hello - %s\n", ft_strchr(str, 'p'));
    return 0;
}
