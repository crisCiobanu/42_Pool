/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:22:58 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 11:19:01 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "myinc.h"

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
		ft_putchar('0' + quot);
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
		ft_putchar('-');
		ft_printnbr(nbu);
	}
	else
	{
		nbu = nb;
		ft_printnbr(nbu);
	}
}
