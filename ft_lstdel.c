/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:59:54 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 21:17:26 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
