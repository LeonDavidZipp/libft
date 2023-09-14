/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:01:29 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:12:32 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return ((void *)b);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[10] = "abcdefg";
// 	memset(str, '-', 5);
// 	printf("%s\n", str);
// 	char *old = ft_memset(str, '+', 5);
// 	printf("%s\n", old);
// 	return (0);
// }
