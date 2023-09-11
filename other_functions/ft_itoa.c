/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:12:22 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 00:21:29 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_len(long nb)
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

	nb = (long) n;
	len = ft_get_len(nb);
	if (nb < 0)
	{}
}
