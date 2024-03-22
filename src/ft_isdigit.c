/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:30:04 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 14:17:04 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (!('0' <= c && '9' >= c))
		return (0);
	return (1);
}

bool	ft_str_isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	return (true);
}

bool	ft_str_isnumber(char *str)
{
	if (!str)
		return (false);
	if (*str == '-' || *str == '+')
		str++;
	return (ft_str_isdigit(str));
}
