#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c) {
    char ch;
    char* arr;

    ch = (char) c;
    arr = (char *) s;

    int i = strlen(s);
    while (i--)
    {
        if (arr[i] == ch)
            return (arr);
    }
    return (NULL);
}

int main() {
    char str[10] = "dymitry";

    printf("symbol - %s\n", ft_strrchr(str, 'm') );
    return 0;
}
