/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_includes_only.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:06:32 by lzipp             #+#    #+#             */
/*   Updated: 2024/04/10 17:07:09 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool	ft_str_includes_only(char *str, char *charset)
{
	while (*str)
	{
		if (!ft_strchr(charset, *str))
			return (false);
		str++;
	}
	return (true);
}
