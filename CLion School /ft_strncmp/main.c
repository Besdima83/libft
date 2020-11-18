#include <stdio.h>

//int ft_strncmp(const char* str1, const char* str2, size_t n)
//{
//    const char* end = str1+n;
//    int result = 0;
//    while (result == 0 && str1 != end && (*str1 || *str2))
//        result = *(str1++) -*(str2++);
//    return result;
//}

int ft_strncmp(const char* str1, const char* str2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    unsigned char* end;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;

    end = s1+n;
    int result = 0;
    while (result == 0 && s1 != end && (*s1 || *s2))
        result = *(s1++) -*(s2++);
    return result;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
