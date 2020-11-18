#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n) {
	unsigned char *s1;
	unsigned char *s2;
	unsigned char *end;
	int result;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	end = s1 + n;
	result = 0;
	while (result == 0 && s1 != end && (*s1 || *s2))
		result = *(s1++) - *(s2++);
	return (result);
}

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

char *ft_strnstr(const char *s, const char *find, size_t slen)
{
	char c;
	char sc;
	size_t len;

	c = *find++;
	if (c != '\0') {
		len = ft_strlen(find);
		do {
			do {
				sc = *s++;
				if (sc == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (ft_strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *) s);
}


int main() {
	char haystack[18] = "MZIRIBMZIRIBMZE123";
	char needle[9] = "MZIRIBMZ9";
	size_t max = ft_strlen(needle);
	char *f = ft_strnstr(haystack, needle, max);
	printf("Hello1 - %s\n", f);
	return 0;
}