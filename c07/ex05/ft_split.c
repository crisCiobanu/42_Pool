/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:43:53 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/31 11:13:02 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_instr(char c, char *str);

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src, char *sep)
{
	int		i;
	int		length;
	char	*tmp;

	length = 0;
	while (src[length] && !ft_instr(src[length], sep))
		length++;
	tmp = malloc(sizeof(*tmp) * length + 1);
	i = 0;
	while (src[i] && i < length)
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	ft_instr(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_wordcount(char *str, char *sep)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (str[i] && ft_instr(str[i], sep))
		i++;
	while (str[i] && i < ft_strlen(str))
	{
		if (!ft_instr(str[i], sep)
			&& (ft_instr(str[i + 1], sep) || !str[i + 1]))
		{
			res++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = malloc(ft_wordcount(str, charset) * sizeof(*res) + 1);
	while (str[i] && i < ft_strlen(str) - 1)
	{
		if (!ft_instr(str[i], charset))
		{
			res[j] = ft_strdup(&str[i], charset);
			i = i + ft_strlen(res[j]);
			j++;
		}
	i++;
	}
	res[j] = 0;
	return (res);
}
