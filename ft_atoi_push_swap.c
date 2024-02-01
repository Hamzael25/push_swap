/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:57:00 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/15 17:39:33 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	else
		return (0);
}

long long	ft_atoi_push_swap(const char *str)
{
	int			i;
	long long	nbr;
	int			signe;

	i = 0;
	nbr = 0;
	signe = 1;
	while (ft_isspace(str[i]) && str[i] != 0)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		if (!ft_isdigit(str[i + 1]))
			return (0);
		i++;
	}
	while (ft_isdigit(str[i]) && str[i] != 0)
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * signe);
}
