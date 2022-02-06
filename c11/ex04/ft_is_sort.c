/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:21:44 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 13:55:56 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}

int	ft_is_sort_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length -1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (ft_is_sort_desc(tab, length, f));
		if (f(tab[i], tab[i + 1]) < 0)
			return (ft_is_sort_asc(tab, length, f));
	}
	return (1);
}
/*
int ft_cmp(int a, int b)
{
	return (a - b);
}

int main(void)
{
	int tab[4] = {0, 0, -1, 0};

	printf("%d \n", ft_is_sort(tab , 4, &ft_cmp));
}*/
