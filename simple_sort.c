/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:36:29 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 18:18:35 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare(t_stack **stack_a)
{
	int		i;
	int		j;
	int		k;

	i = (*stack_a)->index;
	j = (*stack_a)->next->index;
	k = (*stack_a)->next->next->index;
	if (i < j && j > k && k > i)
		return (1);
	else if (i < j && j > k && k < i)
		return (2);
	else if (i > j && j > k && k < i)
		return (3);
	else if (i > j && j < k && k < i)
		return (4);
	return (0);
}

void	sort3(t_stack **stack_a)
{
	if (is_sorted(stack_a))
		return ;
	if (compare(stack_a) == 1)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (compare(stack_a) == 2)
		rra(stack_a);
	else if (compare(stack_a) == 3)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (compare(stack_a) == 4)
		ra(stack_a);
	else
		sa(stack_a);
}

void	simple_sort(t_stack **stack_a, t_stack **stack_b)
{
	(void)(*stack_b);
	if (lstsize(*stack_a) == 0 || lstsize(*stack_a) == 1 || is_sorted(stack_a))
		return ;
	if (lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (lstsize(*stack_a) == 4)
		sort4(stack_a, stack_b);
	else
		sort5(stack_a, stack_b);
}
