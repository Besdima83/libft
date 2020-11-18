#include <stdio.h>
#include <string.h>

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

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
	char *d;
	const char *s;
	size_t dlen;

	d = (char *)dst;
	s = (const char *)src;
	while (size-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	size -= dlen;

	if (size == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));
}



int main() {
	char strbig[10] = "jkabodlsas";
	char strsm[5] = "";
	size_t resulf;
	resulf = ft_strlcat(strbig, strsm, 4);
	size_t func = strlcat(strbig, strsm, 4);
	printf("My func -  %zu\n", resulf);
	printf("Std func -  %zu\n", func);

	return 0;
}
