/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:00:24 by leon              #+#    #+#             */
/*   Updated: 2023/09/10 23:02:25 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
// #include <stdio.h>
// int	main(void)
// {
//     printf("ft_tolower: expected output: a | %c\n", ft_tolower('A'));
//     printf("ft_tolower: expected output: z | %c\n", ft_tolower('Z'));
//     printf("ft_tolower: expected output: 1 | %c\n", ft_tolower('1'));
//     printf("ft_tolower: expected output: $ | %c\n", ft_tolower('$'));
//     printf("ft_tolower: expected output: \\n | %cend\n", ft_tolower('\n'));
//     printf("ft_tolower: expected output: \\t | %cend\n", ft_tolower('\t'));
//     return (0);
// }
