/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:17:24 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 17:30:58 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

bool	ft_str_isspaces(char *str)
{
	int	i;

	if (!str)
		return (false);
	i = -1;
	while (str[++i])
	{
		if (!ft_isspace(str[i]))
			return (false);
	}
	return (true);
}
