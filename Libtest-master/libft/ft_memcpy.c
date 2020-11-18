/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:27:27 by bakali            #+#    #+#             */
/*   Updated: 2020/11/04 17:57:48 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *des;
	unsigned char *sour;

	des = (unsigned char *)destination;
	sour = (unsigned char *)source;
	if (des != NULL || sour != NULL)
	{
		while (n--)
		{
			*des++ = *sour++;
		}
		return (destination);
	}
	return (0);
}
