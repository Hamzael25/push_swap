/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:21:31 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/18 19:27:39 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*next;
}				t_stack;

int			check_error(char **argv);

void		printList(t_stack *stack_a);

int			lstsize(t_stack *lst);

t_stack		*create_cell(int nb);

void		ft_lstad_back(t_stack **lst, t_stack *new);

void		simple_sort(t_stack **stack_a, t_stack **stack_b);

int			is_sorted(t_stack **stack_a);

void		ft_sort_int_lst(t_stack *stack);

long long	ft_atoi_push_swap(const char *str);

int			sa(t_stack **stack_a);

int			pa(t_stack **stack_a, t_stack **stack_b);

int			pb(t_stack **stack_a, t_stack **stack_b);

int			ra(t_stack **stack_a);

int			rra(t_stack **stack_a);

int			rrb(t_stack **stack_b);

int			rrr(t_stack **stack_a, t_stack **stack_b);

void		sort3(t_stack **stack_a);

void		sort4(t_stack **stack_a, t_stack **stack_b);

void		sort5(t_stack **stack_a, t_stack **stack_b);

t_stack		*ft_lstlas(t_stack *lst);

void		radix(t_stack **stack_a, t_stack **stack_b);

void		lstclear(t_stack **lst);

#endif