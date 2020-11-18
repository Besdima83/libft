#include <stdio.h>
#include <string.h>
#include <strings.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;

    if (!dst && !src)
        return NULL;
    d = (char *)dst;
    s = (char *)src;

    while (len--)
    {
        *d++ = *s++;
    }
    return (dst);
}



int main(void)
{
    char buf1[10] = "45678";
    char buf2[10] = "123";
	printf("%s\n", memmove(buf2, buf1, 2));
    printf("%s\n", ft_memmove(buf2, buf1, 2));

    return 0;
}

