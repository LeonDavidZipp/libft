/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:33:28 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/09 22:59:43 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	rev_i;

	rev_i = ft_strlen(s);
	while (rev_i >= 0)
	{
		if (s[rev_i] == (char)c)
			return ((char *)&s[rev_i]);
		rev_i--;
	}
	return (NULL);
}
