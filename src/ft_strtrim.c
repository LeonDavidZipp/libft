/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:33:36 by lzipp             #+#    #+#             */
/*   Updated: 2024/02/04 00:05:07 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (ft_strlen(set) == 0)
		return (0);
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	rev_i;
	size_t	j;
	char	*res;
	size_t	total;

	if (!s1)
		return (NULL);
	i = 0;
	rev_i = ft_strlen(s1) - (ft_strlen > 0);
	while (s1[i] && in_set(s1[i], set))
		i++;
	while (rev_i > 0 && s1[rev_i] && in_set(s1[rev_i], set))
		rev_i--;
	total = 0;
	if (rev_i > i)
		total = rev_i - i + 1;
	res = (char *)malloc((total + 1) * sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	while (i <= rev_i && rev_i > 0)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}
