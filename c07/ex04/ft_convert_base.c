/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:41:26 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/29 16:35:11 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base2(long int nb, char *base_to);

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

int	ft_inbase(char c, char *base)
{
	int	i;
	int	length;

	length = ft_strlen(base);
	i = 0;
	while (i < length)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	res;
	int				pos;
	char			*ret;

	pos = 1;
	res = 0;
	if (!(ft_strlen(base_from) && ft_strlen(base_to)
			&& ft_chartest(base_from) && ft_chartest(base_to)))
		return (0);
	else
	{
		while (ft_iswhitespace(*nbr) || *nbr == '+' || *nbr == '-')
		{
			nbr++;
			if (*nbr == '-')
				pos = pos * -1;
		}
		while (ft_inbase(*nbr, base_from) >= 0)
		{
			res = res * ft_strlen(base_from) + ft_inbase(*nbr, base_from);
			nbr++;
		}
		ret = ft_convert_base2(pos * res, base_to);
	}
	return (ret);
}
