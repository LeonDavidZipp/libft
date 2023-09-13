/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:56:26 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 23:13:19 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*successor;

	if (lst && f)
	{
		while (lst != NULL)
		{
			successor = lst->next;
			f(lst);
			lst = successor;
		}
	}
}
// #include <stdio.h>
// static void	print_elem(t_list *elem)
// {
//     printf("%s\n", (char *)elem->content);
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
//     ft_lstiter(lst, &print_elem);
//     return (0);
// }
