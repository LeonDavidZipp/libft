/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:29:26 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/09 10:37:21 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t			total;

	// if (count < 0 || size < 0)
	// 	return (NULL);
	// if (count == 0 || size == 0)
	// {
	// 	ptr = (unsigned char *)malloc(1);
	// 	if (!ptr)
	// 		return (NULL);
	// 	return ((void *)ptr);
	// }
	total = count * size;
	if (size != 0 && total / size != count)
		return (NULL);
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return ((void *)ptr);
}
