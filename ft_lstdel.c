/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:59:54 by leon              #+#    #+#             */
/*   Updated: 2023/09/15 11:02:54 by leon             ###   ########.fr       */
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
// #include <stdio.h>
// void	del(void *content, size_t content_size)
// {
//     if (content)
//     {
//         ft_bzero(content, content_size);
//         free(content);
//     }
// }
// int	main(void)
// {
//     t_list	*lst;
//     t_list	*elem1;
//     t_list	*elem2;
//     t_list	*elem3;
//     elem1 = ft_lstnew("Hello", 6);
//     elem2 = ft_lstnew("World", 6);
//     elem3 = ft_lstnew("!", 2);
//     elem1->next = elem2;
//     elem2->next = elem3;
//     lst = elem1;
//     ft_lstdel(&lst, &del);
//     if (lst == NULL)
//         printf("All elements deleted successfully\n");
//     else
//         printf("Error: elements still present in the list\n");
//     return (0);
// }
