/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:29:17 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/18 17:32:42 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rrotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last;

	if (lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	last = ft_lstlas(head);
	while (head->next != last)
		head = head->next;
	head->next = NULL;
	last->next = (*stack);
	(*stack) = last;
	return (0);
}

int	rra(t_stack **stack_a)
{
	if (rrotate(stack_a) == -1)
		return (-1);
	ft_printf("rra\n");
	return (0);
}

int	rrb(t_stack **stack_b)
{
	if (rrotate(stack_b) == -1)
		return (-1);
	ft_printf("rrb\n");
	return (0);
}

int	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (lstsize(*stack_a) < 2 || lstsize(*stack_b) < 2)
		return (-1);
	rrotate(stack_a);
	rrotate(stack_b);
	ft_printf("rrr\n");
	return (0);
}
