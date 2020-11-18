/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:00:16 by bakali            #+#    #+#             */
/*   Updated: 2020/11/18 14:34:01 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*strsum;
	int		len;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	strsum = (char *)malloc(len * sizeof(char));
	if (!strsum)
		return (NULL);
	while (*str1 != '\0')
	{
		*strsum++ = *str1++;
	}
	while (*str2 != '\0')
	{
		*strsum++ = *str2++;
	}
	*strsum++ = '\0';
	return (strsum - len);
}
