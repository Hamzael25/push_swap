/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:36:20 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 17:23:04 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		j;
	int		size;

	size = lstsize(*stack_a);
	j = 0;
	while (!is_sorted(stack_a))
	{
		i = 0;
		while (i < size)
		{
			if ((((*stack_a)->index >> j) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			i++;
		}
		while (*stack_b)
		{
			pa(stack_a, stack_b);
		}
		j++;
	}
}
