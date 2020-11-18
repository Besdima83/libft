#include <stdio.h>
#include <string.h>
#include <unistd.h>


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


//char *ft_strnstr1(const char *s, const char *find, size_t slen)
//{
//	char c, sc;
//	size_t len;
//
//	if ((c = *find++) != '\0') {
//		len = strlen(find);
//		do {
//			do {
//				if ((sc = *s++) == '\0' || slen-- < 1)
//					return (NULL);
//			} while (sc != c);
//			if (len > slen)
//				return (NULL);
//		} while (ft_strncmp(s, find, len) != 0);
//		s--;
//	}
//	return ((char *) s);
//}

//char *ft_strnstr(const char *s, const char *find, size_t slen)
//{
//	char c;
//	char sc;
//	size_t len;
//
//	c = *find++;
//	if (c != '\0') {
//		len = ft_strlen(find);
//		do {
//			do {
//				sc = *s++;
//				if (sc == '\0' || slen-- < 1)
//					return (NULL);
//			} while (sc != c);
//			if (len > slen)
//				return (NULL);
//		} while (ft_strncmp(s, find, len) != 0);
//		s--;
//	}
//	return ((char *) s);
//}

char *ft_strnstr2(const char *s, const char *find, size_t slen)
{
	char c;
	char sc;
	size_t len;

	c = *find++;
	while (c != '\0')
	{
		len = ft_strlen(find);
		sc = *s++;
		if (sc == '\0' || slen-- < 1)
			return NULL;
		if (sc == c) {
			while (ft_strncmp(s, find, len) != 0)
			{
				if (len > slen)
					return NULL;
				s--;
				slen--;
			}
		}
		return ((char *) s);
	}
	return ((char *) s);
}

int main() {
	char haystack[18] = "MZIRIBMZIRIBMZE123";
	char needle[9] = "MZIRIBMZ9";
	size_t max = ft_strlen(needle);
//	char *p = strnstr(haystack, needle, 7);
	char *f = ft_strnstr2(haystack, needle, max);
//	char *h = ft_strnstr1(haystack, needle, 7);
//	printf("Hello - %s\n", p);
	printf("Hello1 - %s\n", f);
//	printf("Hello1 - %s\n", h);
	return 0;
}
