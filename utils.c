/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:06:39 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 17:25:53 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_stack *stack_a)
{
	while (stack_a)
	{
		ft_printf("NB : %d  ", stack_a->nb);
		ft_printf("INDEX : %d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	ft_printf("-------------------------------\n");
}

int	lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
