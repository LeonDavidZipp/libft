/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:33:36 by lzipp             #+#    #+#             */
/*   Updated: 2024/03/07 15:06:18 by lzipp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	in_set(char c, char const *set)
{
	int	i;

	if (ft_strlen(set) == 0)
		return (0);
	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		front_i;
	int		rev_i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return ((char *)s1);
	front_i = 0;
	rev_i = ft_strlen(s1) - 1;
	while (s1[front_i] && in_set(s1[front_i], set))
		front_i++;
	while (rev_i > 0 && s1[rev_i] && in_set(s1[rev_i], set))
		rev_i--;
	res = (char *)ft_calloc(rev_i + 2 - front_i, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (front_i <= rev_i)
		res[i++] = s1[front_i++];
	return (res);
}

char	*ft_strntrim(char const *s1, char const *set, int n)
{
	int		i;
	int		front_i;
	int		rev_i;
	int		front_n;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return ((char *)s1);
	front_i = 0;
	rev_i = ft_strlen(s1) - 1;
	front_n = n;
	while (s1[front_i] && in_set(s1[front_i], set) && front_n--)
		front_i++;
	while (rev_i > 0 && s1[rev_i] && in_set(s1[rev_i], set), n--)
		rev_i--;
	res = (char *)ft_calloc(rev_i + 2 - front_i, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (front_i <= rev_i)
		res[i++] = s1[front_i++];
	return (res);
}

char	*ft_trim_in_place(char const *s1, char const *set)
{
	char	*res;
	char	*temp;

	temp = ft_strtrim(s1, set);
	if (!temp)
		return (NULL);
	res = ft_strdup(temp);
	free(temp);
	return (res);
}

char	*ft_ntrim_in_place(char *s1, char const *set, int n)
{
	char	*res;
	char	*temp;

	temp = ft_strntrim(s1, set, n);
	if (!temp)
		return (NULL);
	res = ft_strdup(temp);
	free(temp);
	free(s1);
	return (res);
}
