/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:01:31 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/19 16:10:18 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(char c)
{	
	int		i;
	char	whitespace[6];

	whitespace[0] = ' ';
	whitespace[1] = '\t';
	whitespace[2] = '\n';
	whitespace[3] = '\v';
	whitespace[4] = '\f';
	whitespace[5] = '\r';
	i = 0;
	while (i < 6)
	{
		if (whitespace[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	pos;

	pos = 1;
	res = 0;
	while (ft_iswhitespace(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			pos = pos * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + (*str - 48);
		str++;
	}
	return (res * pos);
}
