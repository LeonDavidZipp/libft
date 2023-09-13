/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:47:06 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/10 21:45:02 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
		return (0);
	return (1);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%i\n", ft_isalpha('a'));
// 	printf("%i\n", ft_isalpha('3'));
// 	printf("%i\n", ft_isalpha('b'));
// }