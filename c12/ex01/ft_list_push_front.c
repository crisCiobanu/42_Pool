/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:22:59 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 11:53:41 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
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
	t_list *list;

	list = NULL;

    elem1 = ft_create_elem("abc");
	ft_list_push_front(&list, "def");

    aff_list(list);

}*/
