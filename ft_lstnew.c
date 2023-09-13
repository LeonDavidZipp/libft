/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:21:49 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 20:47:57 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void *)malloc(content_size);
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = "Hello, World!";
//     t_list *node1, *node2;
//     node1 = ft_lstnew(str, strlen(str) + 1);
//     if (node1)
//     {
//         printf("Node1 Content: %s\n", (char *)node1->content);
//         printf("Node1 Content Size: %zu\n", node1->content_size);
//         free(node1->content);
//         free(node1);
//     }
//     node2 = ft_lstnew(NULL, 0);
//     if (node2)
//     {
//         printf("Node2 Content: %p\n", node2->content);
//         printf("Node2 Content Size: %zu\n", node2->content_size);
//         free(node2);
//     }
//     return (0);
// }
