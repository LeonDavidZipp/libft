/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:30:17 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/23 12:10:15 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*result;
	int		start;

	nb = (long) n;
	len = ft_numlen(nb, 10) + 1;
	start = (nb < 0);
	if (nb < 0)
		nb *= -1;
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	result[len - 1] = '\0';
	len -= 2;
	while (len >= start)
	{
		result[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
