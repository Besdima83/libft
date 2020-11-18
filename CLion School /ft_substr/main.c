#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	char *substr;
	size_t i;
	size_t st;
	size_t leng;

	str = (char *)s;
	leng = (int)len;
	i = 0;
	st = (int) start;
	if (!s)
		return (NULL);
	if(st > ft_strlen(str))
		st = ft_strlen(str);
	if(leng > (ft_strlen(str) - st))
		leng = (ft_strlen(str) - st);
	substr = (char *)malloc(leng+1);
	if (!substr)
		return (NULL);
	if (s == 0)
		return (substr);
	if (start >= ft_strlen(s))
		return(substr);
	while (i < leng)
	{
		substr[i] = s[st];
		i++;
		st++;
	}
	substr[i] = '\0';
	return (substr);
}



int main() {
	char *str1 = "123456789";
	printf("Substr - %s\n", ft_substr(str1, 400, 20));
	printf("Len - %lu\n", strlen(ft_substr(str1, 400, 20)));
	return 0;
}


