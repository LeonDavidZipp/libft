/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:29:48 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/22 13:26:04 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
		return (0);
	return (1);
}

bool	ft_str_isalpha(char *str)
{
	while (*str)
	{
		if (!ft_isalpha(*str))
			return (false);
		str++;
	}
	return (true);
}
