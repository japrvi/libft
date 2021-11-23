/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:19:03 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 13:19:08 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst1;
	unsigned const char	*src1;

	if (!(dst || src) && n > 0)
		return (dst);
	dst1 = dst;
	src1 = src;
	while (n)
	{
		n--;
		dst1[n] = src1[n];
	}
	return (dst);
}
