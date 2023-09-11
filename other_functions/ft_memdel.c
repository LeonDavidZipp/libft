/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:52 by leon              #+#    #+#             */
/*   Updated: 2023/09/11 11:53:23 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
//         printf("Test 1: Passed! Memory was freed and pointer was set to NULL.\n");
//     } else {
//         printf("Test 1: Failed! Pointer was not set to NULL after ft_memdel.\n");
//     }
//     // Test 2: Null Pointer Test
//     char *test2 = NULL;
//     ft_memdel((void **)&test2);
//     if (!test2) {
//         printf("Test 2: Passed! Function correctly handled a NULL pointer.\n");
//     } else {
//         printf("Test 2: Failed! Pointer was modified by ft_memdel when it shouldn't have been.\n");
//     }
//     return (0);
// }
