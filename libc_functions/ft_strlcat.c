/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:53:35 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/12 17:45:20 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_getlen(char	*str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_getlen(dest);
	len_src = ft_getlen(src);
	i = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest1[20] = "Hello";
// 	char	dest2[20] = "Hello";
// 	char	*src = "34njnscjsn!";
// 	unsigned int	i = ft_strlcat(dest1, src, 20);
// 	printf("%d\n", i);
// 	printf("%s\n", dest1);
// 	unsigned int	j = strlcat(dest2, src, 20);
// 	printf("%d\n", j);
// 	printf("%s\n", dest2);
// 	return (0);
// }
