/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:39:09 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 17:06:44 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*as1;
	unsigned char	*as2;
	size_t			i;

	i = 0;
	as1 = (unsigned char *) s1;
	as2 = (unsigned char *) s2;
	while (i < n)
	{
		if (as1[i] != as2[i])
			return (as1[i] - as2[i]);
		i++;
	}
	return (0);
}
