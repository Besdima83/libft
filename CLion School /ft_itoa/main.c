#include <stdio.h>
#include <stdlib.h>

static int	ft_numleng (int n)
{
	size_t len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n) {
	char *str;
	size_t numleng;
	size_t d;

	numleng = ft_numleng(n);
	if (!(str = (char *) malloc(numleng + 1)))
		return (NULL);
	str[numleng] = '\0';
	if (n < 0) {
		str[0] = '-';
		d = 1;
	} else
		d = 0;
	while (numleng-- > d) {
		str[numleng] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (str);
}

int main() {
	printf("Mem - %i\n",ft_numleng(1234,-0));
	printf("IOT - %c\n",ft_itoa(1234));
	return 0;
}
