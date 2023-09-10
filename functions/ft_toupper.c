/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:53:47 by leon              #+#    #+#             */
/*   Updated: 2023/09/10 23:00:04 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
// #include <stdio.h>
// int	main(void)
// {
//     printf("ft_toupper: expected output: A | %c\n", ft_toupper('a'));
//     printf("ft_toupper: expected output: Z | %c\n", ft_toupper('z'));
//     printf("ft_toupper: expected output: 1 | %c\n", ft_toupper('1'));
//     printf("ft_toupper: expected output: $ | %c\n", ft_toupper('$'));
//     printf("ft_toupper: expected output: \\n | %cend\n", ft_toupper('\n'));
//     printf("ft_toupper: expected output: \\t | %cend\n", ft_toupper('\t'));
//     return (0);
// }
