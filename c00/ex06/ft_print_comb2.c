/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:37:54 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/13 15:10:43 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_p_c(char a, char b, char c, char d)
{
	char	e;

	e = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &e, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_char(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_p_c('0' + a / 10, '0' + a % 10, '0' + b / 10, '0' + b % 10);
			if (a != 98)
			{
				ft_print_char(',');
				ft_print_char(' ');
			}
		}
	}
}
