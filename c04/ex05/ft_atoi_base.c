/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:06:32 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/21 08:36:10 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iswhitespace(char c)
{	
	int		i;
	char	whitespace[6];

	whitespace[0] = ' ';
	whitespace[1] = '\t';
	whitespace[2] = '\n';
	whitespace[3] = '\v';
	whitespace[4] = '\f';
	whitespace[5] = '\r';
	i = 0;
	while (i < 6)
	{
		if (whitespace[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_chartest(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
	i++;
	}
	i = 0;
	while (str[i + 1])
	{
		tmp = str[i];
		j = i + 1;
		while (str[j])
		{
			if (str[j] == tmp)
				return (0);
		j++;
		}
	i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	if (length > 1)
	{
		return (length);
	}
	else
	{
		return (0);
	}
}

int	ft_inbase(char c, char *base)
{
	int	i;
	int	length;

	length = ft_strlen(base);
	i = 0;
	while (i < length)
	{
		if (c == base[i])
		{
			return (i);
		}
	i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	pos;

	pos = 1;
	res = 0;
	if (ft_strlen(base) && ft_chartest(base))
	{
		while (ft_iswhitespace(*str))
		{
			str++;
		}
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				pos = pos * -1;
			str++;
		}
		while (ft_inbase(*str, base) >= 0)
		{
			res = res * ft_strlen(base) + ft_inbase(*str, base);
			str++;
		}
		return (res * pos);
	}
	return (0);
}
