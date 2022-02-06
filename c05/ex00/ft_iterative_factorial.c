/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:17:19 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/23 16:25:32 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		res = 1;
		while (nb != 1)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
}
