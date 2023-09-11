/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:07:53 by leon              #+#    #+#             */
/*   Updated: 2023/09/11 11:57:09 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*c_ptr;
	void	*ptr;
	int		i;

	c_ptr = (char *)malloc(size * sizeof(char));
	if (!c_ptr)
		return (NULL);
	i = 0;
	while (c_ptr[i])
		c_ptr[i++] = 0;
	ptr = c_ptr;
	return (ptr);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // Test 1: Basic Allocation
//     size_t size = 10;
//     char *test1 = (char *)ft_memalloc(size);
//     if (!test1) {
//         printf("Test 1: Allocation failed!\n");
//     } else {
//         int zeros = 1;
//         for (size_t i = 0; i < size; i++) {
//             if (test1[i] != 0) {
//                 zeros = 0;
//                 break;
//             }
//         }
//         if (zeros) {
//             printf("Test 1: Passed!\n");
//         } else {
//             printf("Test 1: Memory not initialized to zero!\n");
//         }
//     }
//     free(test1);
//     // Test 2: Allocation Failure
//     // This test might not always trigger a failure, depending on system capabilities.
//     char *test2 = (char *)ft_memalloc((size_t)-1);  // Trying to allocate the largest possible size
//     if (!test2) {
//         printf("Test 2: Passed! (Expected failure for massive allocation)\n");
//     } else {
//         printf("Test 2: Unexpected success for massive allocation!\n");
//         free(test2);
//     }
//     // Test 3: Boundary Cases
//     char *test3 = (char *)ft_memalloc(0);  // Allocating zero bytes
//     if (!test3) {
//         printf("Test 3: Allocation of zero bytes failed!\n");
//     } else {
//         printf("Test 3: Passed! (Allocation of zero bytes succeeded)\n");
//         free(test3);
//     }
//     return 0;
// }
