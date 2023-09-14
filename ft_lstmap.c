/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:19:56 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 11:11:37 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*start;

	start = NULL;
	while (lst != NULL)
	{
		new_lst = (t_list *)malloc(sizeof(t_list));
		if (!new_lst)
			ft_lstdel(lst, f);
		if (!start)
			start = new_lst;
		ft_memcpy(new_lst->content, f(lst), lst->content_size);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (start);
}
