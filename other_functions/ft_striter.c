/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:11:47 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 17:15:03 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
		{
			f(s);
			s++;
		}
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	ft_tolower(int c)
// {
// 	if (c >= 65 && c <= 90)
// 		c += 32;
// 	return (c);
// }
// void	ft_tolower_wrapper(char *c)
// {
//     *c = ft_tolower(*c);
// }
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str4[] = "   ";
//     char str5[] = "NoSpacesHere";
//     ft_striter(str1, &ft_tolower_wrapper);
//     ft_striter(str2, &ft_tolower_wrapper);
//     ft_striter(str4, &ft_tolower_wrapper);
//     ft_striter(str5, &ft_tolower_wrapper);
//     printf("expected output: \"hello, world!\" | \"%s\"\n", str1);
//     printf("expected output: \"12345\" | \"%s\"\n", str2);
//     printf("expected output: \"   \" | \"%s\"\n", str4);
//     printf("expected output: \"nospaceshere\" | \"%s\"\n", str5);
//     return (0);
// }
