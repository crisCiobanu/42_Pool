/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:55:56 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 09:20:16 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) != 0)
			return (1);
	}
	return (0);
}
/*
int ft_test(char *tab)
{
	int i = -1;
	while (tab[++i])
	{
		if (tab[i] == 'a')
			return (1);
	}
	return (0);
}

int main(void)
{
	char *var = NULL;
	char *tab[5] = {"ccc", "dad", "lll", "rrr", var};
	printf("%d \n", ft_any(tab , &ft_test));
}*/
