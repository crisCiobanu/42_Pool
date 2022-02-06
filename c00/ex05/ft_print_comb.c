/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:17:04 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/13 14:27:06 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putmorechars(char d, char f, char g)
{
	ft_putchar(d);
	ft_putchar(f);
	ft_putchar(g);
}

void	ft_print_comb(void)
{	
	char	i;
	char	j;
	char	k;

	i = '0' -1;
	while (++i <= '9')
	{
		j = i;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{
				ft_putmorechars(i, j, k);
				if (i != '7' || j != '8' || k != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}	
		}
	}
}	
