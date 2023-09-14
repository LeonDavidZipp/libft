/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:26:24 by leon              #+#    #+#             */
/*   Updated: 2023/09/14 13:15:16 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		rev_i;
	int		j;
	char	*result;

	i = 0;
	rev_i = 0;
	j = 0;
	while (s[rev_i])
		rev_i++;
	if (rev_i > 0)
		rev_i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[rev_i] == ' ' || s[rev_i] == '\t' || s[rev_i] == '\n')
		rev_i--;
	if (i >= rev_i)
		rev_i = i;
	result = (char *)malloc((rev_i - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i <= rev_i)
		result[j++] = s[i++];
	result[j] = '\0';
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
//     char *str1 = "   Hello, World!   ";
//     char *str2 = "\t\t\t12345\t\t\t";
//     char *str3 = "\n\n\nLorem ipsum\n\n\n";
//     char *str4 = " \t\n  \t";
//     char *str5 = "NoSpacesHere";
//     char *result1 = ft_strtrim(str1);
//     char *result2 = ft_strtrim(str2);
//     char *result3 = ft_strtrim(str3);
//     char *result4 = ft_strtrim(str4);
//     char *result5 = ft_strtrim(str5);
//     printf("expected output: \"Hello, World!\" | \"%s\"\n", result1);
//     printf("expected output: \"12345\" | \"%s\"\n", result2);
//     printf("expected output: \"Lorem ipsum\" | \"%s\"\n", result3);
//     printf("expected output: \"\" | \"%s\"\n", result4);
//     printf("expected output: \"NoSpacesHere\" | \"%s\"\n", result5);
//     free(result1);
//     free(result2);
//     free(result3);
//     free(result4);
//     free(result5);
//     return (0);
// }
