/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:01:33 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:12:08 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ci;

	ptr = (unsigned char *)s;
	ci = (unsigned char)c;
	while (n)
	{
		if (*ptr == ci)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
