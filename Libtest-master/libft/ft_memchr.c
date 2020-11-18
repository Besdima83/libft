/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:27:27 by bakali            #+#    #+#             */
/*   Updated: 2020/11/02 18:16:55 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char symbol;
	unsigned char *arr;

	arr = (unsigned char *)s;
	symbol = (unsigned char)c;
	while (n--)
	{
		if (*arr == symbol)
			return (arr);
		arr++;
	}
	return (NULL);
}
