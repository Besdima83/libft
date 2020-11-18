#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ntsid.h>
#include <time.h>
void	*ft_memset(void *buf, char z, size_t bytes)
{
    char *tmp_mem;

    tmp_mem = (char*)buf;
    if (buf)
    {
        while (bytes--)
            {
                *tmp_mem = z;
                tmp_mem++;
            }
        }
        return (buf);
}

int main() {
    unsigned char src[15] = "NULL";
    memset(src, 'z', 3);
    printf("Str: %s\n", src);


//    ft_memset(src, 'z', 4);
//    printf("Str: %s\n", src);


    return 0;
}
