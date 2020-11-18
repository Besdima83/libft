#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c)
{
    char ch;
    ch = (char) c;
    char *current = NULL;
    char *i;

    i = (char *)s;
    while (*i)
    {
        if (*i == ch)
            current = i;
        i++;
    }
    if (current == NULL)
        return NULL;
    return current;
}

int main() {
    char str[15] = "0163456769";
    int ch = '6';

    printf("symbol - %s\n", ft_strrchr (str,ch));
    return 0;
}
