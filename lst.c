/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:29:05 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 19:47:56 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlas(t_stack *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_stack	*create_cell(int nb)
{
	t_stack	*cell;

	cell = malloc(sizeof(t_stack));
	if (!cell)
		return (cell);
	cell->nb = nb;
	cell->next = NULL;
	return (cell);
}

void	ft_lstad_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlas(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

void	lstclear(t_stack **lst)
{
	t_stack	*tmp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}
