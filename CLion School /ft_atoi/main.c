#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	char *s;
	int minus;
	int i;
	unsigned int res;

	res = 0;
	minus = 1;
	i = 0;
	s = (char *)str;

	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;

	while (*s == '-' || *s == '+')
	{
		i++;
		if (i > 1)
			return 0;
		if (*s == '-')
		{
			minus = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - 48);
		s++;
		if (res > 2147483647 && minus == 1)
			return -1;
		if (res > 2147483648 && minus == -1)
			return 0;
	}
	return (res * minus);
}

int main() {
	const char st[30] = "99999999999999999999999999";
	printf("num = %i\n", ft_atoi(st));
	printf("num = %i\n", atoi(st));
	return 0;
}