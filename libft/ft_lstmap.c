/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:21:39 by mmohamme          #+#    #+#             */
/*   Updated: 2021/11/13 23:25:57 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelm;
	t_list	*newlst;

	if (!f || !lst)
		return (NULL);
	newelm = ft_lstnew(f(lst->content));
	if (!newelm)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	newlst = newelm;
	lst = lst->next;
	while (lst)
	{
		newelm = ft_lstnew(f(lst->content));
		if (!newelm)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&newlst, del);
		}
		lst = lst -> next;
		ft_lstadd_back(&newlst, newelm);
	}
	return (newlst);
}
