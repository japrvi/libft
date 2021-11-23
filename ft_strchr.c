/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:27:41 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 12:22:16 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *) s;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (res + i);
		i++;
	}
	if (s[i] == (char) c)
		return (res + i);
	return (NULL);
}
