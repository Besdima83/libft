#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *strsum;
	int len;

	str1 = (char *)s1;
	str2 = (char *)s2;

	len = strlen(str1) + strlen(str2) +1;

	strsum = (char *)malloc(len * sizeof(char));
	if (!strsum)
		return (NULL);
	while (*str1 != '\0')
	{
		*strsum++ = *str1++;
	}
	while (*str2 != '\0')
	{
		*strsum++ = *str2++;
	}
	*strsum++ = '\0';
	return (strsum - len);
}

int main() {
	char *st1 = "12345";
	char *st2 = "6789";
	printf("STRSUM - %s\n", ft_strjoin(st1, st2));
	return 0;
}
