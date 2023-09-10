/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:37:54 by leon              #+#    #+#             */
/*   Updated: 2023/09/10 21:44:47 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
			|| ('0' <= c && '9' >= c)))
		return (0);
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
//     printf("ft_isalnum: expected output: 1 | %d\n", ft_isalnum('a'));
//     printf("ft_isalnum: expected output: 1 | %d\n", ft_isalnum('Z'));
//     printf("ft_isalnum: expected output: 1 | %d\n", ft_isalnum('0'));
//     printf("ft_isalnum: expected output: 1 | %d\n", ft_isalnum('9'));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum(' '));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum('\n'));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum('\t'));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum('$'));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum('['));
//     printf("ft_isalnum: expected output: 0 | %d\n", ft_isalnum('{'));
//     return (0);
// }
