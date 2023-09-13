/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:20:04 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 10:48:18 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = 0;
	while (needle[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (j == len)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str4[] = "   ";
//     char str6[] = "needle";
//     char str7[] = "haystack";
//     char str9[] = "This is not a needle in a haystack";
//     char *result1_ft = ft_strstr(str1, "World");
//     char *result1_str = strstr(str1, "World");
//     char *result2_ft = ft_strstr(str2, "3");
//     char *result2_str = strstr(str2, "3");
//     char *result4_ft = ft_strstr(str4, " ");
//     char *result4_str = strstr(str4, " ");
//     char *result6_ft = ft_strstr(str6, "needle");
//     char *result6_str = strstr(str6, "needle");
//     char *result7_ft = ft_strstr(str7, "needle");
//     char *result7_str = strstr(str7, "needle");
//     char *result9_ft = ft_strstr(str9, "needle");
//     char *result9_str = strstr(str9, "needle");
//     printf("ft_strstr: expected output: \"World!\" | \"%s\"\n", result1_ft);
//     printf("strstr: expected output: \"World!\" | \"%s\"\n", result1_str);
//     printf("ft_strstr: expected output: \"345\" | \"%s\"\n", result2_ft);
//     printf("strstr: expected output: \"345\" | \"%s\"\n", result2_str);
//     printf("ft_strstr: expected output: \"   \" | \"%s\"\n", result4_ft);
//     printf("strstr: expected output: \"   \" | \"%s\"\n", result4_str);
//     printf("ft_strstr: expected output: \"needle\" | \"%s\"\n", result6_ft);
//     printf("strstr: expected output: \"needle\" | \"%s\"\n", result6_str);
//     printf("ft_strstr: expected output: \"\" | \"%s\"\n", result7_ft);
//     printf("strstr: expected output: \"\" | \"%s\"\n", result7_str);
//     printf("ft_strstr: expected output: \"\" | \"%s\"\n", result9_ft);
//     printf("strstr: expected output: \"\" | \"%s\"\n", result9_str);
//     return (0);
// }
