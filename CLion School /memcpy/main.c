#include <stdio.h>
#include <string.h>

void *ft_memcpy (void *destination, const void *source, size_t n)
{
    unsigned char *des;
    unsigned char *sour;

    des = (unsigned char *) destination;
    sour = (unsigned char *) source;
    if (des != NULL || sour != NULL)
    {
        while (n--)
        {
            *des++ = *sour++;
        }
        return (destination);
    }
    return 0;
}

int main() {
    unsigned char src[10]="dmitry";

    // Массив приемник данных
    unsigned char dst[10]="";

    // Копируем 6 байт из массива src в массив dst
    ft_memcpy (dst, src, 2);

    // Вывод массива dst на консоль
    printf ("dst: %s\n",dst);

    return 0;
}
