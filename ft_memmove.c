/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:31:44 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/09 14:49:02 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	greater(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;
	char	next;

	i = 0;
	while (i < len)
	{
		if (i + 1 < len)
			next = dst[i + 1];
		else
			next = dst[i];
		dst[i] = src[i];
		i++;
	}
}

static void	less(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
		greater(dest, source, len);
	else if (dst < src)
		less(dest, source, len);
	return ((void *)dst);
}

// int	main(void)
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// 	return (0);
// }
