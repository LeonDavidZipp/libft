/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:32:37 by lzipp             #+#    #+#             */
/*   Updated: 2024/02/16 17:52:18 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strndup(const char *s1, int len)
{
	char	*dest;
	int		i;

	if (!s1)
		return (NULL);
	if (len <= 0)
		return ("");
	if (len > ft_strlen(s1))
		len = ft_strlen(s1);
	dest = (char *)ft_calloc(len + 1, sizeof (char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
