/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:44:20 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/10 17:55:03 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_node;
	t_list	*node;

	if (!lst)
	{
		ft_lstclear(&lst, del);
		return ((void *)(0));
	}
	node = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		n_node = ft_lstnew(f(lst->content));
		if (!n_node)
		{
			ft_lstclear(&node, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&node, n_node);
		lst = lst->next;
	}
	n_node = NULL;
	return (node);
}
