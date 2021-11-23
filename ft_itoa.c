/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:43:28 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 18:53:43 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*negative_routine(int n);
static char	*positive_routine(int n);
static int	iteration(int n);

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n == 0)
	{
		ptr = malloc(2);
		ptr[0] = '0';
		ptr[1] = 0;
		return (ptr);
	}
	else if (n < 0)
		return (negative_routine(n));
	else
		return (positive_routine(n));
}

static char	*positive_routine(int n)
{
	char	*ptr;
	int		i;

	i = iteration(n) - 1;
	ptr = (char *) ft_calloc(i + 2, 1);
	while (i >= 0)
	{
		ptr[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (ptr);
}

static char	*negative_routine(int n)
{
	char	*ptr;
	int		i;

	i = iteration(n);
	ptr = (char *) ft_calloc(i + 2, 1);
	if (ptr)
	{
		ptr[0] = '-';
		ptr[i] = '0' - (n % 10);
		i--;
		n = -(n / 10);
		while (i > 0)
		{
			ptr[i] = '0' + n % 10;
			i--;
			n = n / 10;
		}
	}
	return (ptr);
}

static int	iteration(int n)
{
	int	i;

	i = 0;
	while (n / 10 != 0 || n % 10 != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}
