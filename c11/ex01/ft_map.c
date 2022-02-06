/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:16:46 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 09:19:50 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = malloc(sizeof(*tab) * length);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}
/*
int ft_plus_five( int n)
{
	return (n + 5);
}

int main(void)
{
	int tab[5] = {1, 2, 5, 6, 9};
	int *restab;
        restab = ft_map(tab, 5 , &ft_plus_five);
	int i = -1;
	while(++i < 5)
		printf("%d\n", restab[i]);
}*/
