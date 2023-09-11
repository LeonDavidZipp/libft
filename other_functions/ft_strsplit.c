/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:07:01 by leon              #+#    #+#             */
/*   Updated: 2023/09/12 00:06:29 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_words(char const *s, char c)
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
	return (count);
}

int	ft_get_wlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len != '\0'])
		len++;
	return (len);
}

void	ft_free_mem(char **result, int j)
{
	while (j - 1 >= 0)
	{
		free(result[j - 1]);
		j--;
	}
	free(*result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		len;
	int		i;
	int		j;
	int		k;

	len = ft_count_words(s, c);
	result = (char **)malloc(len * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] == c && s[i])
			i++;
		result[j] = (char *)malloc((ft_get_wlen(&s[i], c) + 1) * sizeof(char));
		if (!result[j])
			ft_free_mem(result, j);
		k = 0;
		while (s[i] != c && s[i])
			result[j][k++] = s[i++];
		result[j++][k] = '\0';
	}
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
//     char *str1 = "Hello, World!";
//     char *str2 = "12345";
//     char *str3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
//     char *str4 = "   ";
//     char *str5 = "NoSpacesHere";
//     char **result1 = ft_strsplit(str1, ' ');
//     char **result2 = ft_strsplit(str2, ' ');
//     char **result3 = ft_strsplit(str3, ' ');
//     char **result4 = ft_strsplit(str4, ' ');
//     char **result5 = ft_strsplit(str5, ' ');
//     for (int i = 0; i < 2; i++)
//         printf("expected: \"%s\" | \"%s\"\n", result1[i], result1[i]);
//     for (int i = 0; i < 1; i++)
//         printf("expected: \"%s\" | \"%s\"\n", result2[i], result2[i]);
//     for (int i = 0; i < 8; i++)
//         printf("expected: \"%s\" | \"%s\"\n", result3[i], result3[i]);
//     for (int i = 0; i < 0; i++)
//         printf("ft_strsplit: expected output: \"\" | \"%s\"\n", result4[i]);
//     for (int i = 0; i < 1; i++)
//         printf("expected: \"NoSpacesHere\" | \"%s\"\n", result5[i]);
//     free(result1);
//     free(result2);
//     free(result3);
//     free(result4);
//     free(result5);
//     return (0);
// }
