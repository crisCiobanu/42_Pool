/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:40:39 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/27 08:12:54 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*tmp;

	length = 0;
	while (src[length])
		length++;
	tmp = malloc(sizeof(*tmp) * length + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = malloc(sizeof(*av[i]) * ft_strlen(av[i]) + 1);
		if (!res[i].str)
			return (NULL);
		res[i].str = av[i];
		res[i].copy = malloc(sizeof(*av[i]) * ft_strlen(av[i]) + 1);
		if (!res[i].copy)
			return (NULL);
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
