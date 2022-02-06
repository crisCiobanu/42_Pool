/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:00:26 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/24 08:35:14 by cciobanu         ###   ########.fr       */
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

int	ft_cmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && i < n)
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_lencomparing(s1, s2) >= 0)
		return (ft_cmp(s1, s2, n));
	else
		return (ft_cmp(s2, s1, n) * -1);
}
