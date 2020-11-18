/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:27:27 by bakali            #+#    #+#             */
/*   Updated: 2020/11/05 14:47:07 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ch;
	char *arr;

	ch = (char)c;
	arr = (char *)s;
	while (*arr)
	{
		if (*arr == ch)
			return (arr);
		arr++;
	}
	if (ch == '\0')
		return (arr);
	return (NULL);
}
