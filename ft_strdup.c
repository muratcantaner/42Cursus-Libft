/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:39:38 by mtaner            #+#    #+#             */
/*   Updated: 2022/08/15 23:39:38 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t		len;
	char		*str2;

	len = ft_strlen(str1) + 1;
	str2 = malloc(sizeof(char) * len);
	if (!str2)
		return (0);
	return (ft_memcpy(str2, str1, len));
}
