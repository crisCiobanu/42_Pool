/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:49:27 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/27 08:15:18 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_printchar(str[i]);
	ft_printchar('\n');
}

void	ft_printnbr(int nbr)
{
	if (nbr >= 10)
		ft_printnbr(nbr / 10);
	ft_printchar(nbr % 10 + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_printstr(par[i].str);
		ft_printnbr(par[i].size);
		ft_printchar('\n');
		ft_printstr(par[i].copy);
		i++;
	}
}
