#include <stdio.h>
#include <string.h>

//size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
//{
//	char *d;
//	char *s;
//	size_t n;
//
//	d = (char *)dst;
//	s = (char *)src;
//	n = siz;
//
//if (!dst || !src)
//	return 0;
//
//	if (n != 0) {
//		while (--n) {
//			if ((*d++ = *s++) == '\0')
//				break;
//		}
//	}
//
//	if (n == 0) {
//		if (siz)
//			*d = '\0';
//		while (*s++)
//			;
//	}
//
//	return(s - src - 1);
//}
//
//size_t ft_strlen(const char *str)
//{
//	int len;
//
//	len = 0;
//	while (str[len] != '\0')
//		len++;
//	return (len);
//}
//
//size_t	ft_strlcpy_1(char *dst, const char *src, size_t size)
//{
//	unsigned int len;
//	unsigned int i;
//
//	if (!src)
//		return (0);
//	len = ft_strlen(src);
//	if (size == 0)
//		return (len);
//	i = 0;
//	while (i < size - 1 && src[i] != '\0')
//	{
//		dst[i] = src[i];
//		i++;
//	}
//	dst[i] = '\0';
//	return (len);
//}


size_t ft_strlcat (char *dst, const char *src, size_t size)
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;

	d = (char *)dst;
	s = (const char *)src;
	n = (size_t)size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));
}




int main()
{
	char d1[5] = "abcdef";
	char s1[11] = "123456789";

	printf("str - %zu", ft_strlcat(d1, s1, 3));
	return 0;
}




//	if (n > sd)
//	{
//		while (--sd)
//			if ((*d++ = *s++) == '\0')
//				break;
//	}