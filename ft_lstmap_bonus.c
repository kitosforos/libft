/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:48:57 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 14:42:06 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_and_return(void *cont, t_list **head, void (*del)(void *))
{
	if ((head))
		ft_lstclear(head, del);
	del(cont);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	void	*cont;

	if (lst)
	{
		cont = f(lst->content);
		if (!cont)
			return (free_and_return(cont, NULL, del));
		head = ft_lstnew(cont);
		if (!head)
			return (free_and_return(cont, NULL, del));
		lst = lst->next;
		while (lst)
		{
			cont = f(lst->content);
			new = ft_lstnew(cont);
			if (!new || !cont)
				free_and_return(cont, &head, del);
			ft_lstadd_back(&head, new);
			lst = lst->next;
		}
		return (head);
	}
	return (NULL);
}
