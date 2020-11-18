/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:43:10 by bakali            #+#    #+#             */
/*   Updated: 2020/11/12 13:54:13 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void			*cpu;
	unsigned int	n;

	n = ft_strlen(s1) + 1;
	cpu = (char *)malloc(n * sizeof(char));
	if (!cpu)
		return (NULL);
	ft_strlcpy(cpu, s1, n);
	return (cpu);
}
