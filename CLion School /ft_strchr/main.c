#include <stdio.h>
#include <string.h>
//char* ft_strchr(const char *s, int c)
//{
//    char ch;
//    ch = (char) c;
//    char* arr;
//    arr = (char *) s;
//
//    while (*arr++ != '\0')
//        if (*arr == ch)
//            return (arr);
//    return (NULL);
//}

char* ft_strchr(const char *s, int c)
{
    char ch;
    char* arr;

    ch = (char) c;
    arr = (char *) s;

    while (*arr)
    {
        if (*arr == ch)
            return (arr);
        arr++;
    }
    if (ch == '\0' )
        return (arr);
    return (NULL);
}

int main() {
    char str[10] = "bespalov";
    printf("Hello - %s\n", ft_strchr(str, '\0'));
    return 0;
}

