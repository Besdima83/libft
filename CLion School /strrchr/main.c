#include <stdio.h>
#include <string.h>


char *ft_strnstr_1(const char *haystack, const char *needle, size_t len)
{
	char c;
	char sc;
	size_t leng;

	c =*needle++;
	if (c != '\0')
		leng = strlen(needle);

}
char *
ft_strnstr(s, find, slen)
		const char *s;
		const char *find;
		size_t slen;
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

void main ()
{
	char longstr[20] = "Hello how are you";
	char shortstr[4] = "how";
	char *p = ft_strnstr(longstr, shortstr, 10);
	printf("Str - %s", p);
}