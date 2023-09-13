/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:43:27 by leon              #+#    #+#             */
/*   Updated: 2023/09/13 15:08:59 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*dest = *source;
		if (*source == (unsigned char)c)
			return ((void *)(dest + 1));
		dest++;
		source++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     char src1[] = "Hello, World!";
//     char dest1[20];
//     char src2[] = "This is a test string";
//     char dest2[21];
//     void *result1_ft = ft_memccpy(dest1, src1, 'o', sizeof(src1) - 1);
//     void *result1_str = memccpy(dest1, src1, 'o', sizeof(src1) - 1);
//     void *result2_ft = ft_memccpy(dest2, src2, 't', sizeof(src2) - 1);
//     void *result2_str = memccpy(dest2, src2, 't', sizeof(src2) - 1);
//     if (result1_ft != NULL)
//         printf("ft_memccpy: \"o, World!\" | \"%s\"\n", dest1);
//     else
//         printf("ft_memccpy: expected output: not found\n");
//     if (result1_str != NULL)
//         printf("memccpy: expected output: \"o, World!\" | \"%s\"\n", dest1);
//     else
//         printf("memccpy: expected output: not found\n");
//     if (result2_ft != NULL)
//         printf("ft_memccpy: \"test string\" | \"%s\"\n", dest2);
//     else
//         printf("ft_memccpy: expected output: not found\n");
//     if (result2_str != NULL)
//         printf("memccpy: \"test string\" | \"%s\"\n", dest2);
//     else
//         printf("memccpy: expected output: not found\n");
//     return (0);
// }
