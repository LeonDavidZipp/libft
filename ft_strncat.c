/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:37:49 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/14 13:14:30 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] && i < n)
		s1[len++] = s2[i++];
	s1[len] = '\0';
	return (s1);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	main()
// {
// 	char	s1[100] = "abcde78";
// 	char	s12[100] = "abcde78";
// 	char	s2[] = " Hello World!";
// 	char *l = ft_strncat(s1, s2, 4);
// 	printf("ft_str: %s\n", l);
// 	char *m = strncat(s12, s2, 4);
// 	printf("str: %s\n", m);
// 	return (0);
// }
