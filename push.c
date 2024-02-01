/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:34:00 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/18 17:36:20 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = (*stack_b);
	(*stack_b) = tmp;
	ft_printf("pa\n");
	return (0);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_a)->next;
	(*stack_a)->next = (*stack_b);
	(*stack_b) = (*stack_a);
	(*stack_a) = tmp;
	ft_printf("pb\n");
	return (0);
}
