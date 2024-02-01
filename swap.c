/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:35:29 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 17:34:22 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_stack **stack)
{
	int		tmp_nb;
	int		tmp_index;

	if (lstsize(*stack) < 2)
		return (-1);
	tmp_nb = (*stack)->next->nb;
	tmp_index = (*stack)->next->index;
	(*stack)->next->nb = (*stack)->nb;
	(*stack)->next->index = (*stack)->index;
	(*stack)->nb = tmp_nb;
	(*stack)->index = tmp_index;
	return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_printf("sa\n");
	return (0);
}

int	sb(t_stack **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_printf("sb\n");
	return (0);
}

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (lstsize(*stack_a) < 2 || lstsize(*stack_b) < 2)
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	return (0);
}
