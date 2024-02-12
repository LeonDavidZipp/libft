/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_null_term_arrs.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:23:00 by lzipp             #+#    #+#             */
/*   Updated: 2024/02/12 16:11:35 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_free_2d_arr(void **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

void	ft_free_3d_arr(void ***arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		ft_free_2d_arr(arr[i]);
	free(arr);
}

void	ft_free_4d_arr(void ****arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		ft_free_3d_arr(arr[i]);
	free(arr);
}
