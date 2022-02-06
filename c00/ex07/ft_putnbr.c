/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:22:58 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/22 12:17:50 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(unsigned int nb)
{
	int	rm10;
	int	dvsr;
	int	quot;

	rm10 = nb / 10;
	dvsr = 1;
	while (dvsr <= rm10)
	{
		dvsr *= 10;
	}
	while (dvsr)
	{
		quot = nb / dvsr;
		ft_printchar('0' + quot);
		nb %= dvsr;
		dvsr /= 10;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nbu;

	if (nb < 0)
	{
		nbu = nb * -1;
		ft_printchar('-');
		ft_printnbr(nbu);
	}
	else
	{
		nbu = nb;
		ft_printnbr(nbu);
	}
	ft_printchar('\n');
}
