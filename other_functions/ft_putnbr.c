/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:21:07 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 10:39:00 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	long	nb;

	nb = (long) n;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
// int	main(void)
// {
//     int num1 = 12345;
//     int num2 = -6789;
//     int num3 = 0;
//     int num4 = -2147483648;
//     int num5 = 2147483647;
//     ft_putnbr(num1);
//     write(1, "\n", 1);
//     ft_putnbr(num2);
//     write(1, "\n", 1);
//     ft_putnbr(num3);
//     write(1, "\n", 1);
//     ft_putnbr(num4);
//     write(1, "\n", 1);
//     ft_putnbr(num5);
//     write(1, "\n", 1);
//     return (0);
// }
