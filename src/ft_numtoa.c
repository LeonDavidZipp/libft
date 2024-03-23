/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:55:30 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/23 12:13:54 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_numtoa(long long n, int base)
{
	char	*result;
	int		len;
	int		start;
	int		neg;

	neg = (n < 0);
	len = ft_numlen(n, base) + 1;
	start = neg;
	if (neg)
		n *= -1;
	result = (char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (NULL);
	if (neg)
		result[0] = '-';
	len -= 2;
	while (len >= start)
	{
		if (n % base < 10)
			result[len--] = (n % base) + '0';
		else
			result[len--] = (n % base) + 'a' - 10;
		n /= base;
	}
	return (result);
}

char	*ft_hextoa_big(long long n)
{
	char	*result;
	int		len;
	int		start;

	len = ft_hex_len(n) + 1;
	start = 0;
	result = (char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (NULL);
	len -= 2;
	while (len >= start)
	{
		if (n % 16 < 10)
			result[len--] = (n % 16) + '0';
		else
			result[len--] = (n % 16) + 'A' - 10;
		n /= 16;
	}
	return (result);
}

char	*ft_pointertoa(unsigned long long n)
{
	char	*result;
	int		len;
	int		start;

	len = ft_pointer_len(n) + 1;
	start = 0;
	result = (char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (NULL);
	len -= 2;
	while (len >= start)
	{
		if (n % 16 < 10)
			result[len--] = (n % 16) + '0';
		else
			result[len--] = (n % 16) + 'A' - 10;
		n /= 16;
	}
	result[0] = '0';
	result[1] = 'x';
	return (result);
}
