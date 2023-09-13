/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:49:31 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 20:56:22 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str3[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
//     char str4[] = "   ";
//     char str5[] = "NoSpacesHere";
//     ft_bzero(str1, sizeof(str1));
//     ft_bzero(str2, sizeof(str2));
//     ft_bzero(str3, sizeof(str3));
//     ft_bzero(str4, sizeof(str4));
//     ft_bzero(str5, sizeof(str5));
//     printf("ft_bzero: expected output: \"\" | \"%s\"\n", str1);
//     printf("ft_bzero: expected output: \"\" | \"%s\"\n", str2);
//     printf("ft_bzero: expected output: \"\" | \"%s\"\n", str3);
//     printf("ft_bzero: expected output: \"\" | \"%s\"\n", str4);
//     printf("ft_bzero: expected output: \"\" | \"%s\"\n", str5);
//     return (0);
// }
