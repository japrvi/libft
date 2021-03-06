/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:56:43 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/21 13:28:20 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	return ((n >= '0' && n <= '9') || (n >= 'A' && n <= 'Z')
		|| (n >= 'a' && n <= 'z'));
}	
