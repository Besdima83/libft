/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:24:41 by bakali            #+#    #+#             */
/*   Updated: 2020/11/05 18:43:01 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	*end;
	int				result;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	end = s1 + n;
	result = 0;
	while (result == 0 && s1 != end && (*s1 || *s2))
		result = *(s1++) - *(s2++);
	return (result);
}
