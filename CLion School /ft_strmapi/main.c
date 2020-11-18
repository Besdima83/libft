#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	size_t i;

	res = NULL;
	if (s && f &&)
	{
		res = (char *)malloc(ft_strlen(s));
		if (!res)
			return (NULL);
		i = 0;
		while (s[i])
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}

int main() {
	char *g = "12345";
	printf("RES - %s\n", ft_strmapi(g, ));
	return 0;
}
