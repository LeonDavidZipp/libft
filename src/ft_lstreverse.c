/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:54:40 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/20 15:03:36 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstreverse(t_list **head)
{
	t_list		*current;
	t_list		*prev;
	t_list		*next;

	current = *head;
	prev = NULL;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

void	ft_reverse_sublist(t_list **before_start, t_list **start,
				t_list **after_end)
{
	t_list		*prev;
	t_list		*current;
	t_list		*next;

	current = *start;
	prev = *after_end;
	next = NULL;
	while (current && ft_strcmp(current->content,
			(*after_end)->content) != 0)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	(*before_start)->next = prev;
}
