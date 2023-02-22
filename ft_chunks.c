/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:57:56 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 22:19:26 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunk(int *k, int chunk, stack_a *stack, stack_b *stack_b, int *tmp, int *r, int j)
{
	while (*k <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * j - chunk / 2]))
			{
				pb(stack, stack_b);
				(*r)++;
			}
			else
			{
				pb(stack, stack_b);
				(*r)++;
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
}
void	ft_chunk_two(int *k, int chunk, stack_a *stack, stack_b *stack_b, int *tmp, int *r, int j)
{
	while (*k <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * j - chunk / 2]))
			{
				pb(stack, stack_b);
				(*r)++;
			}
			else
			{
				pb(stack, stack_b);
				(*r)++;
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
}
void	ft_chunk_three(int *k, int chunk, stack_a *stack, stack_b *stack_b, int *tmp, int *r, int j)
{
	while (*k <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * j - chunk / 2]))
			{
				pb(stack, stack_b);
				(*r)++;
			}
			else
			{
				pb(stack, stack_b);
				(*r)++;
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
}
void	ft_chunk_four(int *k, int chunk, stack_a *stack, stack_b *stack_b, int *tmp, int *r, int j)
{
	while (*k <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * j - chunk / 2]))
			{
				pb(stack, stack_b);
				(*r)++;
			}
			else
			{
				pb(stack, stack_b);
				(*r)++;
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
}
void	ft_chunk_five(int *k, int chunk, stack_a *stack, stack_b *stack_b, int *tmp, int *r, int j)
{
	while (*k <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * j - chunk / 2]))
			{
				pb(stack, stack_b);
				(*r)++;
			}
			else
			{
				pb(stack, stack_b);
				(*r)++;
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
}