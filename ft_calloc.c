/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:29:26 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/08 20:55:02 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	total = count * size;
	if (total / size != count || count < 0 || size < 0)
		return (NULL);
	ptr = (unsigned char *)malloc(total);
	if (!ptr && count != 0 && size != 0)
		return (NULL);
	ft_bzero(ptr, count);
	return ((void *)ptr);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// Test case 1: Allocate memory for 5 integers
// 	int *intArray = (int *)ft_calloc(5, sizeof(int));
// 	if (intArray != NULL)
// 	{
// 		for (int i = 0; i < 5; i++)
// 		{
// 			printf("%d ", intArray[i]); // Expected output: 0 0 0 0 0
// 		}
// 		printf("\n");
// 		free(intArray);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	Test case 2: Allocate memory for 3 double-precision floating-point numbers
// 	double *doubleArray = (double *)ft_calloc(3, sizeof(double));
// 	if (doubleArray != NULL)
// 	{
// 		for (int i = 0; i < 3; i++)
// 		{
// 			printf("%.2lf ", doubleArray[i]); // Expected output: 0.00 0.00 0.00
// 		}
// 		printf("\n");
// 		free(doubleArray);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	// Test case 3: Allocate memory for an array of characters
// 	char *charArray = (char *)ft_calloc(10, sizeof(char));
// 	if (charArray != NULL)
// 	{
// 		strcpy(charArray, "Hello");
// 		printf("%s\n", charArray); // Expected output: Hello
// 		free(charArray);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return 0;
// }
