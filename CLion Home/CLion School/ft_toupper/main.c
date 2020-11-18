#include <stdio.h>
int ft_toupper(int c)
{
    return ((c >= 'a' && c <= 'z') ? c - 'a' + 'A': c);
}


int main() {
    printf("Hello - %i\n", ft_toupper('K'));
    return 0;
}
