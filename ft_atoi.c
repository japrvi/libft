/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:28:56 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/24 12:32:52 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(const char *str)
{
	return (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\r'
		|| *str == '\f' ||*str == ' ');
}

static int	is_sign(const char *str)
{
	return (*str == '-' || *str == '+');
}

static int	is_number(const char *str)
{
	return (*str <= '9' && *str >= '0');
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				res;
	int				sign;

	i = 0;
	sign = 1;
	res = 0;
	while (is_space(str + i))
		i++;
	if (is_sign(str + i))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_number(str + i) && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
