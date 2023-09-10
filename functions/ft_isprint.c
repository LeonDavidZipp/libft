/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:50:03 by leon              #+#    #+#             */
/*   Updated: 2023/09/10 22:51:56 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
//     printf("ft_isprint: expected output: 1 | %d\n", ft_isprint(' '));
//     printf("ft_isprint: expected output: 1 | %d\n", ft_isprint('A'));
//     printf("ft_isprint: expected output: 1 | %d\n", ft_isprint('z'));
//     printf("ft_isprint: expected output: 1 | %d\n", ft_isprint('~'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\t'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\n'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\r'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\b'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\v'));
//     printf("ft_isprint: expected output: 0 | %d\n", ft_isprint('\f'));
//     return (0);
// }
