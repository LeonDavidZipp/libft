/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:32:23 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/09 17:33:20 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(const char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		else if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	printf("%d\n", count);
	return (count);
}

static int	ft_get_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len != '\0'])
		len++;
	return (len);
}

// static void	ft_free_mem(char **result, int j)
// {
// 	while (j - 1 >= 0)
// 	{
// 		free(result[j - 1]);
// 		j--;
// 	}
// 	free(*result);
// }

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		len;
	int		i;
	int		j;
	int		k;

	len = ft_count_words(s, c);
	result = (char **)malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] == c && s[i])
			i++;
		result[j] = (char *)malloc((ft_get_wlen(&s[i], c) + 1) * sizeof(char));
		printf("%d\n", j);
		if (!result[j])
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
			{printf("%c\n", result[j][k]);
			result[j][k++] = s[i++];}
		result[j++][k] = '\0';
	}
	result[j] = NULL;
	return (result);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	const char *h = "hello you dick";
	ft_split(h, ' ');
}
