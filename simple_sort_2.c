/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:17:31 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/18 18:19:12 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*iter;
	int		min;
	int		pos;

	head = *stack;
	iter = *stack;
	min = head->index;
	while (head)
	{
		if (head->index < min)
			min = head->index;
		head = head->next;
	}
	pos = 0;
	while (iter->index != min)
	{
		pos++;
		iter = iter->next;
	}
	return (pos);
}

void	sort4(t_stack **stack_a, t_stack **stack_b)
{
	int		min;

	min = get_min(stack_a);
	if (is_sorted(stack_a))
		return ;
	if (min == 1)
		ra(stack_a);
	else if (min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_stack **stack_a, t_stack **stack_b)
{
	int		min;

	min = get_min(stack_a);
	if (is_sorted(stack_a))
		return ;
	if (min == 1)
		ra(stack_a);
	else if (min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
