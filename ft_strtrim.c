/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:26:24 by leon              #+#    #+#             */
/*   Updated: 2023/10/06 10:45:35 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
// 	char *str1 = "   Hello, World!   n";
// 	char *str2 = "\t12345\t";
// 	char *str3 = "\n\nLorem ipsum\n\nn";
// 	char *str4 = "stwHellostw";
// 	char *str5 = "NoSpacesHere";
// 	char *result1 = ft_strtrim(str1, "   ");
// 	char *result2 = ft_strtrim(str2, "\t");
// 	char *result3 = ft_strtrim(str3, "\n\n");
// 	char *result4 = ft_strtrim(str4, "stw");
// 	char *result5 = ft_strtrim(str5, "No");
// 	printf("expected output: \"Hello, World!   n\" | \"%s\"\n", result1);
// 	printf("expected output: \"12345\" | \"%s\"\n", result2);
// 	printf("expected output: \"Lorem ipsum\" | \"%s\"\n", result3);
// 	printf("expected output: \"Hello\" | \"%s\"\n", result4);
// 	printf("expected output: \"NoSpacesHere\" | \"%s\"\n", result5);
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	free(result4);
// 	free(result5);
// 	return (0);
// }
