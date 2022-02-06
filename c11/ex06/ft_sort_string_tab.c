/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:22:15 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/02 15:46:02 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
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

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int i;
	char *tab[5] = {"xcd" , "xbc" , " ", "b", NULL};

	ft_sort_string_tab(tab);

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
