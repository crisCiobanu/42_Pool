/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 08:30:04 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/01 08:52:40 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_manystrl(char **strs, int size)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		length += j;
		i++;
	}
	return (length);
}

char	*ft_concat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	int		slength;
	char	*res;

	slength = ft_manystrl(strs, size);
	length = slength + ft_strlen(sep) * (size - 1) + 1;
	if (size == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(*res) * length);
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_concat(res, strs[i]);
		if (i < size - 1)
			ft_concat(res, sep);
	}
	return (res);
}
