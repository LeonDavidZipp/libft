/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexes_int_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:22:30 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 16:48:26 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_puthex_big_int_fd(unsigned int n, int len, int fd)
{
	int	worked;

	if (n / 16 > 0)
		len = ft_puthex_big_int_fd(n / 16, len, fd);
	if (len == -1)
		return (-1);
	worked = write(fd, &"0123456789ABCDEF"[n % 16], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}

int	ft_puthex_small_int_fd(unsigned int n, int len, int fd)
{
	int	worked;

	if (n / 16 > 0)
		len = ft_puthex_small_int_fd(n / 16, len, fd);
	if (len == -1)
		return (-1);
	worked = write(fd, &"0123456789abcdef"[n % 16], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}

int	ft_putpointer_int_fd(unsigned long n, int len, int fd)
{
	int	worked;

	if (n / 16 > 0)
		len = ft_putpointer_int_fd(n / 16, len, fd);
	if (len == -1)
		return (-1);
	if (n / 16 == 0)
	{
		worked = write(fd, "0x", 2);
		if (worked == -1)
			return (-1);
		len += 2;
	}
	worked = write(fd, &"0123456789abcdef"[n % 16], 1);
	if (worked == -1)
		return (-1);
	return (len + worked);
}
