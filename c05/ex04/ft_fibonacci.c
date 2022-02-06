/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:28:24 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/24 08:06:24 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
	{
		if (index == 2)
			return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
