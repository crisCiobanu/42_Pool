/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:20:46 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 09:21:26 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < length)
	{
		if (f(tab[i]) != 0)
			count++;
	}
	return (count);
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
        char *tab[5] = {"ccc", "dad", "llaal", "rrr", "asc"};
        printf("%d \n", ft_count_if(tab, 5 , &ft_test));
}*/
