/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:35:11 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 14:56:38 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myinc.h"

int	ft_checkdivmod(int a, int b)
{
	if (a == 0 && b == 3)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (a == 0 && b == 4)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	op;
	int	result;
	int	(*fptr[5])(int, int);

	if (argc != 4)
		return (1);
	fptr[0] = ft_sum;
	fptr[1] = ft_sub;
	fptr[2] = ft_mult;
	fptr[3] = ft_div;
	fptr[4] = ft_mod;
	op = ft_checkop(argv[2]);
	if (op < 0)
	{
		ft_putstr("0\n");
		return (1);
	}
	if (ft_checkdivmod(ft_atoi(argv[3]), op))
		return (1);
	result = fptr[op](ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(result);
	ft_putchar('\n');
}
