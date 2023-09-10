/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:19 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/10 19:54:17 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
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
