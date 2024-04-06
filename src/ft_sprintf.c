/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:12:22 by lzipp             #+#    #+#             */
/*   Updated: 2024/04/06 15:19:06 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char		*ft_convert(va_list *args, char c);
static void		assign_vars(int *i, char **result);

char	*ft_sprintf(char *str, ...)
{
	va_list		args;
	char		*result;
	char		*temp;
	char		curr_char[2];
	int			i;

	va_start(args, str);
	assign_vars(&i, &result);
	while (str[++i])
	{
		if (str[i] != '%')
		{
			curr_char[0] = str[i];
			curr_char[1] = '\0';
			result = ft_join_in_place(result, curr_char);
		}
		else
		{
			temp = ft_convert(&args, str[++i]);
			result = ft_join_in_place(result, temp);
			free(temp);
		}
	}
	va_end(args);
	return (result);
}

static void	assign_vars(int *i, char **result)
{
	*i = -1;
	*result = NULL;
}

static char	*ft_convert(va_list *args, char c)
{
	char	temp[2];

	if (c == 'c')
	{
		temp[0] = (char)va_arg(*args, int);
		temp[1] = '\0';
		return (ft_strdup(temp));
	}
	else if (c == 's')
		return (ft_strdup(va_arg(*args, char *)));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_numtoa(va_arg(*args, long long), 10));
	else if (c == 'x')
		return (ft_numtoa(va_arg(*args, long long), 16));
	else if (c == 'X')
		return (ft_hextoa_big(va_arg(*args, long long)));
	else if (c == 'p')
		return (ft_pointertoa(va_arg(*args, unsigned long)));
	else if (c == '%')
		return (ft_strdup("%"));
	else
		return (ft_strdup(""));
}
