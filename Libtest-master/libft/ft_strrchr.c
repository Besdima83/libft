/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:47:39 by bakali            #+#    #+#             */
/*   Updated: 2020/11/05 16:43:56 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *pos;
	char *str;

	pos = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			pos = str;
		str++;
	}
	if (pos)
		return (pos);
	if (c == '\0')
		return (str);
	return (NULL);
}
