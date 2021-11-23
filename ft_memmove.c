/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:20:09 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 13:20:14 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*asrc;
	char	*adst;
	size_t	i;

	if (!(dst || src) && len > 0)
		return (NULL);
	i = -1;
	asrc = (char *)src;
	adst = (char *)dst;
	if (asrc < adst)
		while ((int)(--len) >= 0)
			*(adst + len) = *(asrc + len);
	else
		while (++i < len)
			*(adst + i) = *(asrc + i);
	return (dst);
}
