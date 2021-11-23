/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:35:50 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/09/26 18:26:20 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;
	t_list	**list;

	if (f && lst)
	{
		new_lst = 0;
		list = &new_lst;
		while (lst)
		{
			elem = ft_lstnew(f(lst->content));
			if (!elem)
			{
				ft_lstclear(list, del);
				return (NULL);
			}
			ft_lstadd_back(list, elem);
			lst = lst->next;
		}
		return (new_lst);
	}
	else
		return (NULL);
}
