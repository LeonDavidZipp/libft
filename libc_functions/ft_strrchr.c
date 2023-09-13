/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:25:13 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 11:33:33 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(&s[len]));
		len--;
	}
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
//     char c3 = 'z';
//     char *result1_ft = ft_strrchr(str1, c1);
//     char *result1_str = strrchr(str1, c1);
//     char *result2_ft = ft_strrchr(str2, c2);
//     char *result2_str = strrchr(str2, c2);
//     char *result3_ft = ft_strrchr(str3, c3);
//     char *result3_str = strrchr(str3, c3);
//     printf("ft_strrchr: expected output: \"orld!\" | \"%s\"\n", result1_ft);
//     printf("strrchr: expected output: \"orld!\" | \"%s\"\n", result1_str);
//     printf("ft_strrchr: expected output: \"5\" | \"%s\"\n", result2_ft);
//     printf("strrchr: expected output: \"5\" | \"%s\"\n", result2_str);
//     printf("ft_strrchr: expected output: \"(null)\" | \"%s\"\n", result3_ft);
//     printf("strrchr: expected output: \"(null)\" | \"%s\"\n", result3_str);
//     return (0);
// }
