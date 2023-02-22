/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:34:08 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 01:13:36 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest_index(stack_a *stack, int *smallest_index, int i)
{
	int	smallest_value;
	int	j;

	smallest_value = stack->array[0];
	j = 1;
	while (j < i)
	{
		if (stack->array[j] < smallest_value)
		{
			smallest_value = stack->array[j];
			*smallest_index = j;
		}
		j++;
	}
	return (*smallest_index);
}
