/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:48:53 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/26 12:54:13 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lon;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	lon = ft_strlen(s);
	if (start > lon)
		return (ft_strdup(""));
	if (lon > len)
		lon = len;
	ptr = (char *) malloc(lon + 1);
	if (!ptr)
		return (NULL);
	while (i < lon)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
