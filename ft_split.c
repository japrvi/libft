/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:59:17 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/28 15:07:09 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (flag == 0 && s[i] != c)
		{
			flag = 1;
			count++;
		}
		else if (flag == 1 && s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	**free_matrix(char **mat, size_t last_index)
{
	while (last_index >= 0)
	{
		if (mat[last_index])
			free(mat[last_index]);
		last_index--;
	}
	free(mat);
	return (0);
}

static char	**ft_empty_matrix(void)
{
	char	**mat;

	mat = (char **) ft_calloc(1, sizeof(char *));
	if (!mat)
		return (0);
	mat[0] = 0;
	return (mat);
}

static char	**ft_make_matrix(const char *s, char c, size_t wc)
{
	char	**mat;
	size_t	i;
	size_t	j;
	size_t	w;

	mat = ft_calloc(wc + 1, sizeof(char *));
	if (!mat)
		return (ft_empty_matrix());
	i = -1;
	w = 0;
	j = 0;
	while (++i < wc && s[j])
	{
		while (s[w] == c)
			w++;
		j = 0;
		while (s[w + j] && s[w + j] != c)
			j++;
		mat[i] = ft_substr(s, w, j);
		if (!mat[i])
			return (free_matrix(mat, i));
		w += j;
	}
	mat[i] = NULL;
	return (mat);
}

char	**ft_split(const char *s, char c)
{
	if (!s)
		return (0);
	return (ft_make_matrix(s, c, ft_count_words(s, c)));
}
