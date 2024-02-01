/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkError.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:25:37 by ikaismou          #+#    #+#             */
/*   Updated: 2023/01/18 19:21:29 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	max_int(long long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return (1);
	return (0);
}

static int	is_valid_char(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (ft_isdigit(str[i]) || str[i] == '+' || str[i] == '-'))
		i++;
	if (str[i] == 0)
		return (1);
	return (0);
}

int	check_error(char **argv)
{
	char		**args;
	long long	nb;
	int			i;
	int			j;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			return (0);
		args = ft_split(argv[i], ' ');
		j = 0;
		while (args[j])
		{
			nb = ft_atoi_push_swap(args[j]);
			if (!is_valid_char(args[j]) || !is_num(args[j]) || !max_int(nb))
				return (ft_free_tab(args), 0);
			j++;
		}
		ft_free_tab(args);
		i++;
	}
	return (1);
}
