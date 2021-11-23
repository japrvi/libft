/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:21:12 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/26 12:58:41 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char const c, char const *s);

char	*ft_strtrim(char const *s, char const *set)
{
	char	*ptr;
	size_t	first;
	size_t	last;
	int		i;

	if (!s || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s) - 1;
	i = 0;
	while (i == 0)
	{
		if (first == last)
			return (ft_strdup(""));
		if (in_set(s[first], set))
			first++;
		else if (in_set(s[last], set))
			last--;
		else
			i = 1;
	}
	ptr = ft_substr(s, (unsigned int) first, last - first + 1);
	return (ptr);
}

static int	in_set(char const c, char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}
