/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:52:52 by lzipp             #+#    #+#             */
/*   Updated: 2023/09/10 21:39:36 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!('0' <= c && '9' >= c))
		return (0);
	return (1);
}
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	printf("%i\n", ft_isdigit('0'));
// 	printf("%i\n", ft_isdigit(0));
// 	printf("%i\n", ft_isdigit('a'));
// }
