/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:38 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 23:52:46 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rrb(t_stack *b)
{
	int	first_element;
	int	i;

	i = 0;
	first_element = b->array[0];
	while (i < b->top)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[b->top] = first_element;
	write(1, "rrb\n", 4);
}

void	rra(t_stack *stack)
{
	int	first_element;
	int	i;

	first_element = stack->array[0];
	i = 0;
	while (i < stack->top)
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	stack->array[stack->top] = first_element;
	write(1, "rra\n", 4);
}

void	ra(t_stack *stack)
{
	int	top_element;
	int	i;

	top_element = stack->array[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[0] = top_element;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	int	top_element;
	int	i;

	i = stack->top;
	top_element = stack->array[stack->top];
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[0] = top_element;
	write(1, "rb\n", 3);
}
