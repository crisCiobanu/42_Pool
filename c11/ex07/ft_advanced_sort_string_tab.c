/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:02:14 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 13:58:58 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = 0;
	while (tab[length])
		length++;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i -1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
