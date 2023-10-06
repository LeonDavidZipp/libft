/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:21:49 by leon              #+#    #+#             */
/*   Updated: 2023/10/06 14:44:53 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content == NULL)
		new->content = NULL;
	else
	{
		new->content = (void *)malloc(sizeof(content));
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, sizeof(content));
	}
	new->next = NULL;
	return (new);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = "Hello, World!";
//     t_list *node1, *node2;
//     node1 = ft_lstnew(str);
//     if (node1)
//     {
//         printf("Node1 Content: %s\n", (char *)node1->content);
//         printf("Node1 Content Size: %zu\n", sizeof(str));
//         free(node1->content);
//         free(node1);
//     }
//     node2 = ft_lstnew(NULL);
//     if (node2)
//     {
//         printf("Node2 Content: %p\n", node2->content);
//         printf("Node2 Content Size: %zu\n", sizeof(content));
//         free(node2);
//     }
//     return (0);
// }
