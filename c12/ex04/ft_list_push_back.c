/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:57:15 by cciobanu          #+#    #+#             */
/*   Updated: 2022/02/03 15:23:25 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (elem)
	{	
		if (*begin_list == NULL)
			*begin_list = elem;
		else
		{
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = elem;
		}
	}
}

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
    ft_list_push_front(&elem1, "def");
	ft_list_push_back(&elem1, "XXX");

    aff_list(elem1);

}
