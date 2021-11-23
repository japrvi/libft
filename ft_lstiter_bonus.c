/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:41:10 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/22 13:50:05 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{	
	t_list	*aux;

	aux = lst;
	if (f && lst)
	{
		while (aux->next)
		{
			(f)(aux->content);
			aux = (aux->next);
		}
		(f)(aux->content);
	}
}
