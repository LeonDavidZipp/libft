/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:27:49 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 16:54:12 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, s);
			i++;
		}
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void	ft_toupper_wrapper(unsigned int i, char *c);
// int	main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str4[] = "   ";
//     char str5[] = "NoSpacesHere";
//     ft_striteri(str1, &ft_toupper_wrapper);
//     ft_striteri(str2, &ft_toupper_wrapper);
//     ft_striteri(str4, &ft_toupper_wrapper);
//     ft_striteri(str5, &ft_toupper_wrapper);
//     printf("ft_striteri: expected output: \"HELLO, WORLD!\" | \"%s\"\n", str1);
//     printf("ft_striteri: expected output: \"12345\" | \"%s\"\n", str2);
//     printf("ft_striteri: expected output: \"   \" | \"%s\"\n", str4);
//     printf("ft_striteri: expected output: \"NOSPACESHERE\" | \"%s\"\n", str5);
//     return (0);
// }
// void	ft_toupper_wrapper(unsigned int i, char *c)
// {
//     if (c[i] >= 'a' && c[i] <= 'z')
//         c[i] -= 32;
// }