/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:51:30 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 14:42:59 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_int(int n, int len)
{
	long	nb;
	int		worked;

	nb = (long)n;
	if (nb < 0)
	{
		worked = write (1, "-", 1);
		nb *= -1;
		if (worked == -1 || len == -1)
			return (-1);
		len += worked;
	}
	if (nb / 10 > 0)
		len = ft_putnbr_int(nb / 10, len);
	if (len == -1)
		return (-1);
	worked = write(1, &"0123456789"[nb % 10], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}

int	ft_putu_int(unsigned int n, int len)
{
	int	worked;

	if (n / 10 > 0)
		len = ft_putnbr_int(n / 10, len);
	if (len == -1)
		return (-1);
	worked = write(1, &"0123456789"[n % 10], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}

int	ft_putnbr_int_fd(int n, int len, int fd)
{
	long	nb;
	int		worked;

	nb = (long)n;
	if (nb < 0)
	{
		worked = write (fd, "-", 1);
		nb *= -1;
		if (worked == -1 || len == -1)
			return (-1);
		len += worked;
	}
	if (nb / 10 > 0)
		len = ft_putnbr_int_fd(nb / 10, len, fd);
	if (len == -1)
		return (-1);
	worked = write(fd, &"0123456789"[nb % 10], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}

int	ft_putu_int_fd(unsigned int n, int len, int fd)
{
	int	worked;

	if (n / 10 > 0)
		len = ft_putnbr_int_fd(n / 10, len, fd);
	if (len == -1)
		return (-1);
	worked = write(fd, &"0123456789"[n % 10], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}
