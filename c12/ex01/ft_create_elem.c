/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:47:42 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 11:19:08 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
/*
void    aff_list(struct s_list *begin)
{
    while (begin)
    {
        printf("%s\n", begin->data);
        begin = begin->next;
    }
}

int main(void)
{
	t_list *elem1;

	elem1 = ft_create_elem("abc");

	aff_list(elem1);

}*/
