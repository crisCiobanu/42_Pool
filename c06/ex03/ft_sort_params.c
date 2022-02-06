/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:11:20 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/25 09:22:15 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printpar(const char *par)
{
	int	i;

	i = 0;
	while (par[i])
	{
		write(1, &par[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_printpar(argv[i]);
		i++;
	}
}
