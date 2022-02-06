/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:22:30 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/29 16:20:35 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

void	ft_convert(unsigned int nbr, char *base_to, char *ret, int i)
{
	int	length;
	int	rm;
	int	dvsr;
	int	quot;

	length = ft_strlength(base_to);
	rm = nbr / length;
	dvsr = 1;
	while (dvsr <= rm)
		dvsr *= length;
	while (dvsr)
	{
		quot = nbr / dvsr;
		ret[i] = base_to[quot];
		nbr %= dvsr;
		dvsr /= length;
		i++;
	}
	ret[i] = '\0';
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	char			*ret;
	int				i;
	unsigned int	unbr;

	i = 0;
	ret = malloc(34);
	if (!ret)
		return (NULL);
	if (nbr < 0)
	{
		unbr = nbr * -1;
		ret[i] = '-';
		ft_convert(unbr, base_to, ret, ++i);
	}
	else
	{
		unbr = nbr;
		ft_convert(unbr, base_to, ret, i);
	}
	return (ret);
}
