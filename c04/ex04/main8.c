/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:10:56 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/26 17:17:47 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(void)
{
	s_tock_str *test;

	char *tab[3] = {"aaa", "bbbbb" , "cccccccc"};
	test = ft_strs_to_tab(3, tab);
	ft_show_tab(test);
}
