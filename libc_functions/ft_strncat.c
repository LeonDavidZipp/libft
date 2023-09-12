/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:37:49 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/12 17:48:44 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] && i < nb)
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[100] = "abcde78";
// 	char	dest2[100] = "abcde78";
// 	char	src[] = " Hello World!";
// 	char *l = ft_strncat(dest, src, 4);
// 	printf("ft_str: %s\n", l);
// 	char *m = strncat(dest2, src, 4);
// 	printf("str: %s\n", m);
// 	return (0);
// }
