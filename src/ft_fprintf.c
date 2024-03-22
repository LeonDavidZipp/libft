/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:06:54 by leon              #+#    #+#             */
/*   Updated: 2024/03/22 16:46:03 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_convert(va_list *args, char c, int fd)
{
	char	*s;

	if (c == 'c')
		return (ft_putchar_int_fd(va_arg(*args, int), fd));
	else if (c == 's')
	{
		s = va_arg(*args, char *);
		if (s == NULL)
			s = "(null)";
		return (ft_putstr_int_fd(s, fd));
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_int_fd(va_arg(*args, int), 0, fd));
	else if (c == 'u')
		return (ft_putu_int_fd(va_arg(*args, unsigned int), 0, fd));
	else if (c == 'x')
		return (ft_puthex_small_int_fd(va_arg(*args, unsigned int), 0, fd));
	else if (c == 'X')
		return (ft_puthex_big_int_fd(va_arg(*args, unsigned int), 0, fd));
	else if (c == 'p')
		return (ft_putpointer_int_fd(va_arg(*args, unsigned long), 0, fd));
	else if (c == '%')
		return (ft_putchar_int_fd('%', fd));
	else
		return (-1);
}

int	ft_fprintf(int fd, const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		worked;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			worked = ft_putchar_int_fd(str[i++], fd);
		else
		{
			worked = ft_convert(&args, str[i + 1], fd);
			i += 2;
		}
		if (worked == -1)
			return (-1);
		len += worked;
	}
	va_end(args);
	return (len + 1);
}
