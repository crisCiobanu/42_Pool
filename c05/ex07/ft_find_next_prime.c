/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:23:23 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/25 12:53:15 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;

	if (nb == 0 || nb == 1)
		return (0);
	num = 2;
	while (num <= nb / num)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
/*
int ft_sqrt(int nb)
{
    int i;

    i = 2;
    if (nb == 0 || nb == 1)
        return (nb);
    if (nb > 0)
    {
        while (i * i <= nb && i <= 46340)
        {
            if (i * i == nb)
                return (i);
            else
                i++;
        }
    }
    return (0);
}
*/
int	ft_find_next_prime(int nb)
{
//	int sqrt;
//
//	sqrt = ft_sqrt(nb);
	
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}	
	return (0);
}
