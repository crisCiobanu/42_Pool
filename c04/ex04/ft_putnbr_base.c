/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:37:37 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/23 09:13:13 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
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

void	ft_convert(unsigned int nbr, char *base)
{
	unsigned int	length;

	length = ft_strlen(base);
	if (nbr >= length)
		ft_convert(nbr / length, base);
	ft_printchar(base[nbr % length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbu;

	if (ft_strlen(base) && ft_chartest(base))
	{
		if (nbr < 0)
		{
			nbu = nbr * -1;
			ft_printchar('-');
			ft_convert(nbu, base);
		}
		else
		{
			nbu = nbr;
			ft_convert(nbu, base);
		}
	}
}
