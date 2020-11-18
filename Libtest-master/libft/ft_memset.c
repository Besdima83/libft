/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:25:07 by bakali            #+#    #+#             */
/*   Updated: 2020/11/07 15:28:11 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, char z, size_t bytes)
{
	char *tmp_mem;

	tmp_mem = (char*)buf;
	while (bytes--)
	{
		*tmp_mem = z;
		tmp_mem++;
	}
	return (buf);
}
