/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:01:08 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/10 14:06:56 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	new_lst = NULL;
	while (lst != NULL)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
// system("leaks a.out")

// Wrapper function for ft_lstclear
void *wrapper_lstclear(void *content)
{
    t_list **lst = (t_list **)content;
    ft_lstclear(lst, del_function); // Replace 'del_function' with your actual del function
    return NULL; // This function doesn't return any value
}

// Wrapper function for ft_strtrim
void *wrapper_strtrim(void *content)
{
    char **str = (char **)content;
    char *trimmed = ft_strtrim(*str, "Ele 123"); // Replace 'set' with your actual set string
    return (void *)trimmed; // Cast the result back to void*
}


int main() {
    // Create three elements for the linked list
    t_list *element1 = (t_list *)malloc(sizeof(t_list));
    t_list *element2 = (t_list *)malloc(sizeof(t_list));
    t_list *element3 = (t_list *)malloc(sizeof(t_list));

    // Set content for each element
    element1->content = "Element 1";
    element2->content = "Element 2";
    element3->content = "Element 3";

    // Link the elements together to form the list
    element1->next = element2;
    element2->next = element3;
    element3->next = NULL; // The last element's 'next' should be NULL

    // Now, 'element1' is the head of the linked list

    // Create a list of wrapper functions
    t_list *wrapper_list = NULL;
    ft_lstadd_back(&wrapper_list, ft_lstnew(&element1));
    ft_lstadd_back(&wrapper_list, ft_lstnew(&element2));
    ft_lstadd_back(&wrapper_list, ft_lstnew(&element3));

    // Call ft_lstmap with wrapper functions
    t_list *result = ft_lstmap(wrapper_list, wrapper_strtrim, wrapper_lstclear);

    // Clean up memory (free allocated elements)
    // You need to implement proper memory cleanup for result and wrapper_list
    // based on the actual structure of your code

    return 0;
}
