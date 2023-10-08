/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:17:56 by leon              #+#    #+#             */
/*   Updated: 2023/10/08 11:22:48 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	rev_i;

	rev_i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[rev_i]);
	while (rev_i >= 0)
	{
		if (s[rev_i] == (char)c)
			return ((char *)&s[rev_i]);
		rev_i--;
	}
	return (NULL);
}
