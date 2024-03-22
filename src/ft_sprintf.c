/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:12:22 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 18:37:25 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_sprintf(const char *str, ...)
{
	va_list		args;
	int			len;
	char		*result;
	char		*temp;
	int			i;

	va_start(args, str);
	i = 0;
	result = NULL;
	while (str[i])
	{
		if (str[i] != '%')
			result = ft_join_in_place(result, str[i]);
		else
		{
			temp = ft_convert(&args, str[i + 1]);
			result = ft_join_in_place(result, temp);
			free(temp);
			i += 2;
		}
	}
	va_end(args);
	return (result);
}

static int	ft_convert(va_list *args, char c)
{
	char	*s;

	if (c == 'c')
		return (ft_strdup(va_arg(*args, char)));
	else if (c == 's')
	{
		s = va_arg(*args, char *);
		if (s == NULL)
			s = "(null)";
		return (ft_strdup(va_arg(*args, char *)));
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_int(va_arg(*args, int), 0));
	else if (c == 'u')
		return (ft_putu_int(va_arg(*args, unsigned int), 0));
	else if (c == 'x')
		return (ft_puthex_small_int(va_arg(*args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex_big_int(va_arg(*args, unsigned int), 0));
	else if (c == 'p')
		return (ft_putpointer_int(va_arg(*args, unsigned long), 0));
	else if (c == '%')
		return (ft_putchar_int('%'));
	else
		return (-1);
}
