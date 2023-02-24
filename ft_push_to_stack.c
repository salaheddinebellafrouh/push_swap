/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:51:27 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 01:11:45 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_to_stack(t_stack *stack, int k, int i, char **dtr)
{
	long long	input;
	int			max;
	int			min;

	max = 2147483647;
	min = -2147483648;
	i = 0;
	k--;
	while (k >= 0)
	{
		input = ft_atoi(dtr[k]);
		if (input > max || input < min)
			ft_error();
		push(stack, input);
		i++;
		k--;
	}
	return (i);
}
