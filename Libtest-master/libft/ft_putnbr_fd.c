/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:57:18 by bakali            #+#    #+#             */
/*   Updated: 2020/11/10 09:45:35 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;
	int	tmp[10];
	int	i;

	sign = (n >= 0 ? 1 : -1);
	i = (n == 0 ? 1 : 0);
	tmp[0] = 0;
	while (n != 0)
	{
		tmp[i] = n % 10 * sign;
		n /= 10;
		i++;
	}
	if (sign == -1)
		ft_putchar_fd('-', fd);
	while (i > 0)
		ft_putchar_fd(tmp[--i] + '0', fd);
}
