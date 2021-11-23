/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:40:36 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/26 12:52:10 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ptr = (char *) malloc (l1 + l2 + 1);
	if (!ptr)
		return (NULL);
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= l2)
	{	
		ptr[l1 + i] = s2[i];
		i++;
	}
	return (ptr);
}
