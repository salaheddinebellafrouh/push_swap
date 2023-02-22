/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:08:35 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 01:51:30 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_dup(stack_a *stack)
{
	int	m;
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		m = 1;
		while (stack->array[i] != stack->array[i - m] && m < i)
		{
			m++;
		}
		if (stack->array[i] == stack->array[i - m])
			ft_error();
		i--;
	}
}
