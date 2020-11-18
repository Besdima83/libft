

#include <stdio.h>  //Для printf
#include <string.h>   //Для memccpy

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    unsigned char ch;

    d = (unsigned char *) dst;
    s = (unsigned char *) src;
    ch = c;

    while (n-- || *s != '\0')
    {
        *d = *s;
        if (*s == ch)
            return (dst);

        d++;
        s++;
    }
    return 0;
}

int main (void)
{
    // Массив источник данных
    unsigned char src[15]="qwertyuiop";

    // Массив приемник данных
    unsigned char dst[15]="";

    // Копируем данные из массива src в массив dst
    memccpy (dst, src,'1', 40);

    // Вывод массива dst на консоль
    printf ("dst: %s\n",dst);

    return 0;
}