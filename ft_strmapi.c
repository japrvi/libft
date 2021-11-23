/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:03:15 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/26 12:57:18 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*ptr;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	ptr = (char *) malloc (len + 1);
	if (!ptr || !f)
		return (NULL);
	while (i < len)
	{
		ptr[i] = (f)(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
