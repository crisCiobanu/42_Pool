/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:11:17 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/18 09:56:37 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getlength(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_check(char *str, char *to_find, int offset)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] == str[offset])
		{
			i++;
			offset++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	strlength;
	int	findlength;

	i = 0;
	strlength = ft_getlength(str);
	findlength = ft_getlength(to_find);
	if (!to_find[0])
	{
		return (str);
	}
	while (i <= (strlength - findlength))
	{
		if (str[i] == to_find[0])
		{
			if (ft_check(str, to_find, i) > 0)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
