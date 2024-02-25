/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:32:48 by lzipp             #+#    #+#             */
/*   Updated: 2024/02/25 17:03:42 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	len1 = 0;
	while (s1[len1])
	{
		result[len1] = s1[len1];
		len1++;
	}
	len2 = 0;
	while (s2[len2])
	{
		result[len1 + len2] = s2[len2];
		len2++;
	}
	result[len1 + len2] = '\0';
	return (result);
}

char	*ft_join_in_place(char *s1, const char *s2)
{
	char	*temp;

	temp = ft_strjoin(s1, s2);
	if (!temp)
		return (NULL);
	free(s1);
	s1 = ft_strdup(temp);
	free(temp);
	return (s1);
}

#include <stdio.h>
int main() {
    char *s1 = ft_strdup("Hello");
    char *s2 = ft_strdup(", World!");

    printf("Before: |%s| |%s|\n", s1, s2);
    char *result = ft_join_in_place(s1, s2);
    printf("After: |%s|\n", result);
    free(result);

    s1 = ft_strdup("Goodbye");
    s2 = ft_strdup(", World!");

    printf("Before: |%s| |%s|\n", s1, s2);
    result = ft_join_in_place(s1, s2);
    printf("After: |%s|\n", result);
    free(result);

    s1 = ft_strdup("Foo");
    s2 = ft_strdup("Bar");

    printf("Before: |%s| |%s|\n", s1, s2);
    result = ft_join_in_place(s1, s2);
    printf("After: |%s|\n", result);
    free(result);

    s1 = ft_strdup("Baz");
    s2 = ft_strdup("Qux");

    printf("Before: |%s| |%s|\n", s1, s2);
    result = ft_join_in_place(s1, s2);
    printf("After: |%s|\n", result);
    free(result);

    s1 = ft_strdup("Quux");
    s2 = ft_strdup("Corge");

    printf("Before: |%s| |%s|\n", s1, s2);
    result = ft_join_in_place(s1, s2);
    printf("After: |%s|\n", result);
    free(result);

    return 0;
}
