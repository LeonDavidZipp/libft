/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:22:54 by lzipp             #+#    #+#             */
/*   Updated: 2024/04/05 13:39:08 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_recalloc(void *ptr, size_t len, size_t prev_len, size_t data_size)
{
	void	*new_ptr;

	if (!ptr)
		return (ft_calloc(len, data_size));
	if (len == 0)
	{
		free(ptr);
		return (ft_calloc(0, data_size));
	}
	new_ptr = ft_calloc(len, data_size);
	if (!new_ptr)
		return (NULL);
	ft_memmove(new_ptr, ptr, prev_len * data_size);
	free(ptr);
	return (new_ptr);
}
