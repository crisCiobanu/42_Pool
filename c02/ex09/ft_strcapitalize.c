/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:46 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/17 11:12:16 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isl(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int	ft_isup(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

char	ft_touppercase(char c)
{
	return (c - 32);
}

char	ft_tolowercase(char c)
{
	return (c + 32);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isup(str[i]))
		{
			str[i] = ft_tolowercase(str[i]);
		}
	i++;
	}
	i = 0;
	if (ft_isl(str[0]))
	{
		str[0] = ft_touppercase(str[0]);
		i++;
	}
	while (str[++i] != '\0')
	{
		if (ft_isl(str[i]) && (!ft_isl(str[i - 1]) && !ft_isup(str[i - 1])))
		{
			str[i] = ft_touppercase(str[i]);
		}
	}
	return (str);
}
