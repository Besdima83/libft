/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besdima <besdima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:53:38 by bakali            #+#    #+#             */
/*   Updated: 2020/11/18 23:12:21 by besdima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		index;
	int		neg;
	long	res;

	index = 0;
	res = 0;
	while (str[index] == 32 || (str[index] > 8 && str[index] < 14))
		index++;
	neg = (str[index] == '-') ? 1 : 0;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9' && res < 2147483649)
	{
		res = (res * 10) + (str[index] - '0');
		index++;
	}
	if ((neg && res > 2147483648) || (!neg && res > 2147483647))
		return (neg ? 0 : -1);
	return ((int)(neg ? -res : res));
}
