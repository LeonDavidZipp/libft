/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:18:18 by leon              #+#    #+#             */
/*   Updated: 2023/10/06 15:37:07 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*successor;
	t_list	*current;

	current = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (current->next != NULL)
		{
			successor = current->next;
			current = successor;
		}
		current->next = new;
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// void print_list(t_list *lst) {
//     t_list *current = lst;
//     while (current != NULL) {
//         printf("%d -> ", *((int*)current->content));
//         current = current->next;
//     }
//     printf("NULL\n");
// }
// int main() {
//     // Initialize an empty list
// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
//     t_list *head = NULL;
//     // Create new nodes
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);
//     // Add nodes to the list
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);
//     // Print the list to check the order
//     printf("List after adding nodes to the back:\n");
//     print_list(head);
//     // Clean up memory
//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }
