/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:04:03 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 17:31:42 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{	
		write(fd, "-", 1);
		if (n < 0 && n >= -9)
			ft_putchar_fd('0' - n, fd);
		else
		{
			ft_putnbr_fd(-(n / 10), fd);
			ft_putnbr_fd(-(n % 10), fd);
		}
	}	
	else
	{
		if (n >= 0 & n <= 9)
			ft_putchar_fd('0' + n, fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}
