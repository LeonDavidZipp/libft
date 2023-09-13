/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:19 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/13 13:02:31 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	str1[20] = "123456789";
// 	char	str2[20] = "abcdefgh";
// 	char	str3[20] = "abcdefgh";
// 	ft_strncpy(&str2[0], &str1[0], 6);
// 	strncpy(&str3[0], &str1[0], 6);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// }
