/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:39:34 by mtaner            #+#    #+#             */
/*   Updated: 2022/08/15 23:39:34 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dstt;
	const char		*srcc;
	unsigned int	i;

	i = 0;
	dstt = (char *)dst;
	srcc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
