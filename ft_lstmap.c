/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:19:56 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:04:40 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*start;
	// t_list	*prev;
	// t_list	*temp;

	if (!lst || !f)
		return (NULL);
	start = NULL;
	while (lst != NULL)
	{
		new_lst = (t_list *)malloc(sizeof(t_list));
		if (!new_lst)
			ft_lstdel(lst, f);
		// new_lst = ft_lstnew(f(lst), lst->content_size);
		if (!start)
			start = new_lst;
		ft_memcpy(new_lst->content, f(lst), lst->content_size);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (start);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*successor;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
}
