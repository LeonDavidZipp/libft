/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:56:26 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 22:59:51 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	successor;

	if (lst && f)
	{
		while ((*lst) != NULL)
		{
			successor = (*lst)->next;
			del((*lst)->content, (*lst)->content_size);
			free(*alst);
			*alst = successor;
		}
		*lst = NULL;
	}
}

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*successor;

	if (alst && del)
	{
		while ((*alst) != NULL)
		{
			successor = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = successor;
		}
		*alst = NULL;
	}
}