/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:34:21 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/30 15:48:42 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ptr;
	unsigned int	i;

	if (c == 0)
		return ((char *) s + ft_strlen(s));
	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
		{
			ptr = (char *) s + i;
		}
		i++;
	}
	return (ptr);
}
