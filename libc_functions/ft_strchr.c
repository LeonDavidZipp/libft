/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:06:46 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 11:42:14 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str3[] = "This is a test string";
//     char c1 = 'o';
//     char c2 = '5';
//     char c3 = ' ';
//     char *result1_ft = ft_strchr(str1, c1);
//     char *result1_str = strchr(str1, c1);
//     char *result2_ft = ft_strchr(str2, c2);
//     char *result2_str = strchr(str2, c2);
//     char *result3_ft = ft_strchr(str3, c3);
//     char *result3_str = strchr(str3, c3);
//     printf("ft_strchr: expected output: \"o, World!\" | \"%s\"\n", result1_ft);
//     printf("strchr: expected output: \"o, World!\" | \"%s\"\n", result1_str);
//     printf("ft_strchr: expected output: \"5\" | \"%s\"\n", result2_ft);
//     printf("strchr: expected output: \"5\" | \"%s\"\n", result2_str);
//     printf("ft_strchr: expected output: \"(null)\" | \"%s\"\n", result3_ft);
//     printf("strchr: expected output: \"(null)\" | \"%s\"\n", result3_str);
//     return (0);
// }
