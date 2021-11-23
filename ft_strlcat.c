/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:48:18 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 17:20:04 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	len_dst;

	len_dst = ft_strlen(dest);
	a = 0;
	if (len_dst >= size)
		return (size + ft_strlen(src));
	while (src[a] && (a + len_dst) < (size - 1))
	{
		dest[a + len_dst] = src[a];
		a++;
	}
	dest[a + len_dst] = '\0';
	return (ft_strlen(src) + len_dst);
}
