#include <stdio.h>
int ft_isdigit(int c)
{
    return (c >= 0 && c <= 9);
}
int main() {
    printf("Hello - %i\n", ft_isdigit(6));
    return 0;
}
