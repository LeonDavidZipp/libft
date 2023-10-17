/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:32:23 by lzipp             #+#    #+#             */
/*   Updated: 2023/10/17 10:28:30 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		i;
	int		count;

	if (!s)
		return (0);
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

static char	*ft_make_split_str(const char *s, char delim, int *i)
{
	size_t	size;

	size = *i;
	while (s[*i] != delim && s[*i])
		*i += 1;
	*i -= 1;
	return (ft_substr(s, size, *i - size + 1));
}

void	*ft_free_split(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
		free(result[i++]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int				word_count;
	char			**result;
	int				i;
	int				j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = ft_calloc(word_count + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[word_count] = NULL;
	while (s[++i] && j < word_count)
	{
		if (s[i] != c)
		{
			result[j++] = ft_make_split_str(s, c, &i);
			if (!result[j - 1])
				return (ft_free_split(result));
		}
	}
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
