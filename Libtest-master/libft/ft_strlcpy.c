/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:42:18 by bakali            #+#    #+#             */
/*   Updated: 2020/11/12 11:07:39 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char *d;
	char *s;
	size_t n;

	d = (char *)dst;
	s = (char *)src;
	n = siz;

if (!dst || !src)
	return 0;

	if (n != 0) {
		while (--n) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	if (n == 0) {
		if (siz)
			*d = '\0';
		while (*s++)
			;
	}

	return(s - src - 1);
}
