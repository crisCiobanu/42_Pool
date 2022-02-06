/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:43:20 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/25 11:24:58 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(**range) * length);
	if (!*range)
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}
