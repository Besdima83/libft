#include <stdio.h>  //Для printf
#include <string.h>   //Для memccpy

void ft_bzero(void *s, size_t n)
{
    size_t i;

    if (!s)
        return ;
    i = 0;
    while (i < n)
    {
        *(char *) (s + i) = 0;
        i++;
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
