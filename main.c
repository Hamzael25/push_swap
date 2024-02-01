/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:35:38 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/19 16:01:00 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack **stack_a, char **argv)
{
	t_stack	*cell;
	char	**args;
	int		i;
	int		j;

	args = NULL;
	i = 1;
	while (argv[i])
	{
		args = ft_split(argv[i], ' ');
		j = 0;
		while (args[j])
		{
			cell = create_cell(ft_atoi_push_swap(args[j]));
			if (!cell)
				return (lstclear(stack_a), ft_free_tab(args));
			ft_lstad_back(stack_a, cell);
			j++;
		}
		ft_free_tab(args);
		i++;
	}
}

int	is_sorted(t_stack **stack_a)
{
	t_stack	*list;

	list = *stack_a;
	while (list && list->next)
	{
		if (list->nb > list->next->nb)
			return (0);
		list = list->next;
	}
	return (1);
}

static int	init_index(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*iter;
	int		flg;

	iter = (*stack_a);
	while (iter)
	{
		flg = 0;
		head = (*stack_a);
		iter->index = 0;
		while (head)
		{
			if (iter->nb == head->nb)
				flg += 1;
			if (iter->nb > head->nb)
				iter->index += 1;
			head = head->next;
		}
		if (flg != 1)
			return (0);
		iter = iter->next;
	}
	return (1);
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (lstsize(*stack_a) <= 5)
	{
		simple_sort(stack_a, stack_b);
	}
	else
		radix(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	if (!check_error(argv))
		return (ft_putendl_fd("Error", 2), 0);
	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, argv);
	if (!stack_a)
		return (0);
	if (!init_index(&stack_a))
		return (ft_putendl_fd("Error", 2), lstclear(&stack_a), 0);
	if (is_sorted(&stack_a))
		return (lstclear(&stack_a), 0);
	sort_stack(&stack_a, &stack_b);
	lstclear(&stack_a);
}
