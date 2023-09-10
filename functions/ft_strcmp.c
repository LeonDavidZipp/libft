/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:05:52 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/10 19:55:49 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "Hello World";
// 	char str2[] = "Hello World!";
// 	char str3[] = "hello World";
// 	printf("ft_str: %i\n", ft_strcmp(&str1[0], &str2[0]));
// 	printf("str: %i\n", strcmp(&str1[0], &str2[0]));
// 	printf("ft_str: %i\n", ft_strcmp(&str1[0], &str3[0]));
// 	printf("str: %i\n", strcmp(&str1[0], &str3[0]));
// 	return (0);
// }
