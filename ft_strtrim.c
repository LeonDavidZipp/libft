/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:33:36 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/08 23:13:58 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		rev_i;
	size_t		j;
	size_t		set_len;
	char		*result;

	i = 0;
	rev_i = ft_strlen(s1);
	if (rev_i > 0)
		rev_i--;
	j = 0;
	set_len = ft_strlen(set);
	if (ft_strncmp(&s1[i], set, set_len) == 0)
		i += set_len;
	if (ft_strncmp(&s1[rev_i - set_len + 1], set, set_len) == 0)
		rev_i -= set_len;
	result = (char *)malloc((rev_i - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i <= rev_i)
		result[j++] = s1[i++];
	return (result);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	if (ft_strncmp(ft_strtrim("  xxxtripouille x", " x"), "tripouille", 30))
		printf("\"%s\"\n", ft_strtrim(" xxxtripouille x", " x"));
	return (0);
}
