

#include <stdio.h>  //Для printf
#include <string.h>   //Для memccpy

void *ft_memccpy(void *dst, const void *src, int c, size_t n) {
    unsigned char *d;
    unsigned char *s;
    unsigned char ch;
//
    if (!dst && !src)
        return NULL;

    d = (unsigned char *) dst;
    s = (unsigned char *) src;
    ch = (unsigned char) c;
    while (n--) {
        *d = *s;
        if (*s == ch)
            return (d + 1);
        d++;
        s++;
    }
    return NULL;
}

int main (void)
{
    // Массив источник данных
    unsigned char src[30]="12345";

    // Массив приемник данных
    unsigned char dst[15]="67890";

    // Копируем данные из массива src в массив dst

    // Вывод массива dst на консоль
    printf ("my: %s\n",ft_memccpy (dst, src,'3', 3));
	printf ("st: %s\n",memccpy (dst, src,'3', 3));
    return 0;
}