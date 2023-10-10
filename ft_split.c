/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:32:23 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/10 13:56:18 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_get_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static int	ft_free_mem(char **result, int j)
{
	if (!result[j])
	{
		while (j - 1 >= 0)
		{
			free(result[j - 1]);
			j--;
		}
		free(*result);
		return (1);
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	result = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		result[j] = malloc((ft_get_wlen(&s[i], c) + 1) * sizeof(char));
		if (ft_free_mem(result, j))
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
			result[j][k++] = s[i++];
		result[j++][k] = '\0';
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// int main() {
//     const char *input = "This is a test string";
//     char **result = ft_split(input, ' ');
// 	system("leaks a.out");

//     if (!result) {
//         printf("Memory allocation error in ft_split\n");
//         return 1;
//     }

//     // Print the split strings
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Token %d: %s\n", i, result[i]);
//     }

//     // Free the memory allocated by ft_split
//     for (int i = 0; result[i] != NULL; i++) {
//         free(result[i]);
//     }
//     free(result);
//     return 0;
// }