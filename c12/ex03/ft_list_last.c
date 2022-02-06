/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:32:45 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 14:52:05 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list)
	{
		while (begin_list->next)
		{
			begin_list = begin_list->next;
		}
		return (begin_list);
	}
	return (NULL);
}
/*
void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *elem;

    elem = ft_create_elem(data);
    if (*begin_list == NULL)
        *begin_list = elem;
    else
    {
        elem->next = *begin_list;
        *begin_list = elem;
    }
}
t_list  *ft_create_elem(void *data)
{
    t_list  *elem;

    elem = malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    elem->next = NULL;
    elem->data = data;
    return (elem);
}

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

    elem1 = ft_create_elem("XYX");
    ft_list_push_front(&elem1, "def");
	ft_list_push_front(&elem1, "xxx");
	aff_list(elem1);
//   	printf("%s \n", ft_list_last(elem1)->data);

}*/
