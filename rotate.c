/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:27:20 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/18 17:32:48 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last;

	if (lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	last = ft_lstlas(head);
	*stack = head->next;
	head->next = NULL;
	last->next = head;
	return (0);
}

int	ra(t_stack **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_printf("ra\n");
	return (0);
}

int	rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_printf("rb\n");
	return (0);
}

int	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (lstsize(*stack_a) < 2 || lstsize(*stack_b) < 2)
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	return (0);
}
