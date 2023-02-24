/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:55:05 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 23:53:41 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(int *array, int l)
{
	int	i;

	i = 0;
	while (i < l - 1)
	{
		if (!(array[i] < array[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

void	sort_3_elements(t_stack *stack, int i)
{
	if ((stack->array[i - 2] < stack->array[i - 1])
		&& (stack->array[i - 1] < stack->array[i - 3]))
		sa(stack);
	if ((stack->array[i - 2] < stack->array[i - 1])
		&& (stack->array[i - 2] > stack->array[i - 3]))
		sa(stack);
	if (((stack->array[i - 3] < stack->array[i - 1])
			&& (stack->array[i - 3] < stack->array[i - 2])))
		rra(stack);
	else if (((stack->array[i - 2] > stack->array[i - 3])
			&& (stack->array[i - 1] < stack->array[i - 3])))
		sa(stack);
	if (((stack->array[i - 2] < stack->array[i - 3])
			&& (stack->array[i - 1] > stack->array[i - 3])))
		ra(stack);
}

void	sort_4_elements(t_stack *stack, t_stack *stack_b)
{
	int	smallest_index;

	ft_smallest_index(stack, &smallest_index, 4);
	if (smallest_index == 0)
		rra(stack);
	if (smallest_index == 1)
	{
		rra(stack);
		rra(stack);
	}
	if (smallest_index == 2)
		ra(stack);
	pb(stack, stack_b);
	sort_3_elements(stack, 3);
	pa(stack, stack_b);
}

void	sort_5_elements(t_stack *stack, t_stack *stack_b)
{
	int	smallest_index;

	ft_smallest_index(stack, &smallest_index, 5);
	if (smallest_index == 0)
		rra(stack);
	if (smallest_index == 1)
	{
		rra(stack);
		rra(stack);
	}
	if (smallest_index == 2)
	{
		ra(stack);
		sa(stack);
	}
	if (smallest_index == 3)
		sa(stack);
	pb(stack, stack_b);
	sort_4_elements(stack, stack_b);
	pa(stack, stack_b);
}

void	ft_simple_sort(t_stack *stack, t_stack *stack_b, int i)
{
	int	m;

	m = 1;
	if (i == 2)
	{
		if (check_sort(stack->array, i))
			return ;
		else
			sa(stack);
	}
	else if (i == 3)
		sort_3_elements(stack, i);
	else if (i == 4)
		sort_4_elements(stack, stack_b);
	else
		sort_5_elements(stack, stack_b);
}
