#include <stdio.h>
int ft_isprint(int c)
{
    return (c >= '040' && c <= '176');
}

int main() {
    printf("Hello - %i\n", ft_isprint('FF'));
    return 0;
}
