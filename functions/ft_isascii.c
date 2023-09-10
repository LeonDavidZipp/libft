/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:37:07 by leon              #+#    #+#             */
/*   Updated: 2023/09/10 22:49:13 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// int	ft_isascii(int c);
// int	main(void)
// {
//     printf("ft_isascii: expected output: 1 | %d\n", ft_isascii(0));
//     printf("ft_isascii: expected output: 1 | %d\n", ft_isascii(32));
//     printf("ft_isascii: expected output: 1 | %d\n", ft_isascii(64));
//     printf("ft_isascii: expected output: 1 | %d\n", ft_isascii(126));
//     printf("ft_isascii: expected output: 0 | %d\n", ft_isascii(-1));
//     printf("ft_isascii: expected output: 0 | %d\n", ft_isascii(128));
//     printf("ft_isascii: expected output: 0 | %d\n", ft_isascii(255));
//     return (0);
// }
