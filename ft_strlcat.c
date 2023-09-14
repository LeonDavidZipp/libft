/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:53:35 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/14 13:14:06 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getlen(char	*str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_getlen(dst);
	len_src = ft_getlen(src);
	i = 0;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] != '\0' && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return ((unsigned int)(len_dst + len_src));
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dst1[20] = "Hello";
// 	char	dst2[20] = "Hello";
// 	char	*src = "34njnscjsn!";
// 	unsigned int	i = ft_strlcat(dst1, src, 20);
// 	printf("%d\n", i);
// 	printf("%s\n", dst1);
// 	unsigned int	j = strlcat(dst2, src, 20);
// 	printf("%d\n", j);
// 	printf("%s\n", dst2);
// 	return (0);
// }
