/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:18:27 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 10:20:37 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// int	main(void)
// {
//     char *str1 = "Hello, World!";
//     char *str2 = "12345";
//     char *str3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
//     char *str4 = "   ";
//     char *str5 = "NoSpacesHere";
//     ft_putendl(str1);
//     ft_putendl(str2);
//     ft_putendl(str3);
//     ft_putendl(str4);
//     ft_putendl(str5);
//     return (0);
// }