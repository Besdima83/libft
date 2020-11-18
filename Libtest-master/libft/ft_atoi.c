/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:53:38 by bakali            #+#    #+#             */
/*   Updated: 2020/11/11 20:56:11 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char *s;
	int minus;
	int i;
	unsigned int res;

	 res = 0;
	minus = 1;
	i = 0;
	s = (char *)str;

	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;

	while (*s == '-' || *s == '+')
	{
		i++;
		if (i > 1)
			return 0;
		if (*s == '-')
		{
			minus = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - 48);
		s++;
		if (res > 2147483647 && minus == 1)
			return (-1);
		if (res > 2147483648 && minus == -1)
			return (0);
	}
	return (res * minus);
}
