/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:55:10 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 17:26:01 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len = 0;
	while (s[len])
	{
		result[len] = f(s[len]);
		len++;
	}
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char	ft_toupper_wrapper(char c);
// char	ft_lowercase_wrapper(char c);
// char	*ft_strmap(char const *s, char (*f)(char));
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str4[] = "   ";
//     char str5[] = "NoSpacesHere";
//     char *result1 = ft_strmap(str1, &ft_toupper_wrapper);
//     char *result2 = ft_strmap(str2, &ft_lowercase_wrapper);
//     char *result4 = ft_strmap(str4, &ft_lowercase_wrapper);
//     char *result5 = ft_strmap(str5, &ft_toupper_wrapper);
//     printf("expected output: \"HELLO, WORLD!\" | \"%s\"\n", result1);
//     printf("expected output: \"12345\" | \"%s\"\n", result2);
//     printf("expected output: \"   \" | \"%s\"\n", result4);
//     printf("expected output: \"NOSPACESHERE\" | \"%s\"\n", result5);
//     free(result1);
//     free(result2);
//     free(result4);
//     free(result5);
//     return (0);
// }
// char	ft_toupper_wrapper(char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }
// char	ft_lowercase_wrapper(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return (c + 32);
//     return (c);
// }
