/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:06:44 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 12:14:09 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t t)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = (unsigned char *) s;
	while (i < t)
	{	
		if (res[i] == (unsigned char) c)
			return (res + i);
		i++;
	}
	return (NULL);
}
