/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:04:06 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 01:21:59 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(int value, stack_b *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

void	push_sorted_numbers_to_stack_a(stack_a *a, stack_b *b, int *tmp)
{
	int	i;
	int	index;
	int	j;

	i = b->capacity;
	j = b->capacity - 1;
	while (j >= 0)
	{
		index = find_index(tmp[j], b);
		if (index >= i / 2)
		{
			while (b->array[b->top] != tmp[j])
				rb(b);
			pa(a, b);
			i--;
		}
		else
		{
			while (b->array[b->top] != tmp[j])
				rrb(b);
			pa(a, b);
			i--;
		}
		j--;
	}
}
