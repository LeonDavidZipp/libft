/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:17:21 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/13 12:55:44 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	while (s2[i])
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
// 	char *l = ft_strcat(s1, s2);
// 	char *m = strcat(s12, s2);
// 	printf("ft_str: %s\n", l);
// 	printf("str: %s\n", m);
// 	return (0);
// }
