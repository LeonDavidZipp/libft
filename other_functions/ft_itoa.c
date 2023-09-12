/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:12:22 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 10:30:43 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*result;

	nb = (long) n;
	len = ft_get_len(nb) + 1;
	if (nb < 0)
		nb *= -1;
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	result[len - 1] = '\0';
	len -= 2;
	while (len >= 0 && result[len] != '-')
	{
		result[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
//     int num1 = 12345 - 300;
//     int num2 = -6789;
//     int num3 = 0;
//     int num4 = -2147483648;
//     int num5 = 2147483647;
//     char *result1 = ft_itoa(num1);
//     char *result2 = ft_itoa(num2);
//     char *result3 = ft_itoa(num3);
//     char *result4 = ft_itoa(num4);
//     char *result5 = ft_itoa(num5);
//     printf("ft_itoa: expected output: \"12345\" | \"%s\"\n", result1);
//     printf("ft_itoa: expected output: \"-6789\" | \"%s\"\n", result2);
//     printf("ft_itoa: expected output: \"0\" | \"%s\"\n", result3);
//     printf("ft_itoa: expected output: \"-2147483648\" | \"%s\"\n", result4);
//     printf("ft_itoa: expected output: \"2147483647\" | \"%s\"\n", result5);
//     free(result1);
//     free(result2);
//     free(result3);
//     free(result4);
//     free(result5);
//     return (0);
// }
