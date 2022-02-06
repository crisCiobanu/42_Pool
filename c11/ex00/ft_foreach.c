/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:11:55 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 09:16:13 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}
/*
void ft_printnbr(int n)
{
	printf("%d\n", n);
}

int main(void)
{
	int tab[10] = {5,9,3,4,5,7,89,25,78,65};
	
	ft_foreach(tab , 10, &ft_printnbr);
}*/
