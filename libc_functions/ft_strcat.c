/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:17:21 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/12 17:40:50 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i])
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
// 	char *l = ft_strcat(dest, src);
// 	char *m = strcat(dest2, src);
// 	printf("ft_str: %s\n", l);
// 	printf("str: %s\n", m);
// 	return (0);
// }
