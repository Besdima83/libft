#include <stdio.h>
#include <string.h>
#include <strings.h>
/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (d < s)
        while (len--)
            *d++ = *s++;
    else
    {
        d += len;
        s += len;
        while (len--)
            *--d = *--s;
    }
    return (dst);
}*/


#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void)
{
    char buf1[SIZE], buf2[SIZE];

    strcpy(buf1, "Когда, в случае если...");
    memcpy(buf2, buf1, 9);
    printf(buf2);

    return 0;
}

