/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:30:36 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/20 09:42:56 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lencomparing(char *s1, char *s2)
{
	int	length1;
	int	length2;

	length1 = 0;
	length2 = 0;
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	return (length1 - length2);
}

int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] - s2[i] > 0)
			return (1);
		else if (s1[i] - s2[i] < 0)
			return (-1);
		else
			i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	lendiff;
	int	res;

	lendiff = ft_lencomparing(s1, s2);
	if (lendiff >= 0)
		res = ft_cmp(s1, s2);
	else
		res = ft_cmp(s2, s1) * -1;
	return (res);
}
