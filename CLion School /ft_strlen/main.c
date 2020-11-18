#include <stdio.h>

size_t *ft_strlen (const char *str)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (size_t *) (i);
}

int main() {
    char str[16] = "012345678989";
    printf("Str: %d symbol", ft_strlen(str));
    return 0;
}
