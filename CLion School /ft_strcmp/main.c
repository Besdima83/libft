#include <stdio.h>
#include <string.h>

int ft_strncmp(const char* str1, const char* str2, size_t n)
{
    const char* end = str1+n;
    int result = 0;
    while (result == 0 && str1 != end && (*str1 || *str2))
        result = *(str1++) -*(str2++);
    return result;
}

void strncmp_unit_test(const char* s1, const char* s2, size_t n)
{
    printf("%4s == %4s, %5d == %d\n", s1, s2, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}

int main()
{
    strncmp_unit_test("aaa", "aaa", 3);
    strncmp_unit_test("aaa", "afa", 3);
    strncmp_unit_test("aza", "aca", 3);
    strncmp_unit_test("abc", "abz", 3);
    strncmp_unit_test("abc", "abz", 2);
    strncmp_unit_test("abc", "abz", 1);
    strncmp_unit_test("abc", "abc", 10000);
    strncmp_unit_test("abc", "a", 50);
    strncmp_unit_test("a", "abc", 50);
    strncmp_unit_test("a", "abc", 1);
}

//int main()
//{
//    char  str1[16] = "9234567890";
//    char  str2[16] = "1234567890";
//
//    return ft_strncmp(str1, str2,5);
//}

