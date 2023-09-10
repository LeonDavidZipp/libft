/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:18 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/10 19:56:02 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "2222";
// 	char str2[] = "22266";
// 	char str3[] = "Hello World";
// 	printf("ft_str: %i\n", ft_strncmp(str1, str2, 10));
// 	printf("ft_str: %i\n", strncmp(str1, str2, 6));
// 	printf("str: %i\n", ft_strncmp(&str1[0], &str3[0], 7));
// 	printf("str: %i\n", strncmp(&str1[0], &str3[0], 7));
// 	return (0);
// }
