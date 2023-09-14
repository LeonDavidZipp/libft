/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:52 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:12:23 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
// #include <stdio.h>
// int main(void)
// {
//     // Test 1: Basic Test
//     char *test1 = (char *)malloc(10 * sizeof(char));
//     if (!test1) {
//         printf("Memory allocation failed for Test 1!\n");
//         return (1);
//     }
//     ft_memdel((void **)&test1);
//     if (!test1) {
//         printf("Test 1: Passed!\n);
//     } else {
//         printf("Test 1: Failed!\n);
//     }
//     // Test 2: Null Pointer Test
//     char *test2 = NULL;
//     ft_memdel((void **)&test2);
//     if (!test2) {
//         printf("Test 2: Passed!\n);
//     } else {
//         printf("Test 2: Failed!\n");
//     }
//     return (0);
// }
