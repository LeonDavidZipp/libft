/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:30 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:13:18 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	while (*s)
		write(1, s++, 1);
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
//     ft_putstr(str1);
//     ft_putstr(str2);
//     ft_putstr(str3);
//     ft_putstr(str4);
//     ft_putstr(str5);
//     return (0);
// }
