/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:31:44 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/08 19:31:30 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	greater(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
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
	unsigned char	*temp;

	dest = (unsigned char *)dst;
	temp = (unsigned char *)malloc(len * sizeof(unsigned char));
	temp = ft_memcpy(temp, (unsigned char *)src, len);
	if (dst > src)
		greater(dest, temp, len);
	else if (dst < src)
		less(dest, temp, len);
	free(temp);
	return ((void *)dst);
}

// int	main(void)
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// 	return (0);
// }
