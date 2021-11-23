/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:31:23 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 18:48:18 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	char			*ptr1;
	unsigned int	i;

	i = 0;
	ptr = malloc(count * size);
	ptr1 = (char *) ptr;
	while (i < (count * size) && ptr)
	{
		ptr1[i] = 0;
		i++;
	}
	return (ptr);
}
