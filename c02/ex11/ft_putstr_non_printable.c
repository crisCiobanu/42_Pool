/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:54:35 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/17 15:47:37 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(char c)
{
	char	c1;
	char	c2;
	char	*hex;

	hex = "0123456789abcdef";
	c1 = hex[c % 16];
	c2 = hex[c / 16];
	ft_putchar('\\');
	ft_putchar(c1);
	ft_putchar(c2);
}

int	ft_is_non_printable(char c)
{
	if (c >= 0 && c <= 31)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_non_printable(str[i]))
		{
			ft_printhex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
	i++;
	}
}
