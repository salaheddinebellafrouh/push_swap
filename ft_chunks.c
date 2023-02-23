/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:57:56 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 00:25:01 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunk(int *k, stack_a *stack, stack_b *stack_b, int *tmp)
{
	int chunk;

    chunk = (stack->capacity+1)/5;
	while ((*k) <= chunk)
	{
		if ((stack->array[stack->top] >= tmp[0])
			&& (stack->array[stack->top] <= tmp[chunk]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk - chunk / 2]))
				pb(stack, stack_b);
			else
			{
				pb(stack, stack_b);
				rb(stack_b);
			}
			(*k)++;
		}
		else
			ra(stack);
	}
    
}
void	ft_chunk_two(int *k, stack_a *stack, stack_b *stack_b, int *tmp)
{
	int chunk;

    chunk = (stack->capacity+1)/5;
	while ((*k) <= chunk * 2)
	{
		if ((stack->array[stack->top] >= tmp[chunk])
			&& (stack->array[stack->top] <= tmp[chunk * 2]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * 2 - chunk / 2]))
				pb(stack, stack_b);	
			else
			{
				pb(stack, stack_b);
				rb(stack_b);
			}
			(*k)++;
		
		}
		else
		{
			ra(stack);
		}
	}
}
void	ft_chunk_three(int *k, stack_a *stack, stack_b *stack_b, int *tmp)
{
    int chunk;

    chunk = (stack->capacity+1)/5;
	while ((*k) <= chunk * 3)
	{
		if ((stack->array[stack->top] >= tmp[chunk * 2])
			&& (stack->array[stack->top] <= tmp[chunk * 3]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * 3 - chunk / 2]))
				pb(stack, stack_b);
			else
			{
				pb(stack, stack_b);
				rb(stack_b);
			}
			(*k)++;
		
		}
		else
		{
			ra(stack);
		}
	}
}
void	ft_chunk_four(int *k, stack_a *stack, stack_b *stack_b, int *tmp)
{
    int chunk;

    chunk = (stack->capacity+1)/5;
	while ((*k) <= chunk * 4)
	{
		if ((stack->array[stack->top] >= tmp[chunk * 3])
			&& (stack->array[stack->top] <= tmp[chunk * 4]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * 4 - chunk / 2]))
				pb(stack, stack_b);
			else
			{
				pb(stack, stack_b);
				rb(stack_b);
			}
			(*k)++;
		
		}
		else
		{
			ra(stack);
		}
	}
}
void	ft_chunk_five(int *k, stack_a *stack, stack_b *stack_b, int *tmp)
{
    int chunk;

    chunk = (stack->capacity+1)/5;
while ((*k) == chunk * 5 - 1)
	{
		if ((stack->array[stack->top] >= tmp[chunk * 4])
			&& (stack->array[stack->top] <= tmp[chunk * 5 - 1]))
		{
			if (!(stack->array[stack->top] >= tmp[chunk * 5 - chunk / 2]))
				pb(stack, stack_b);
			else
			{
				pb(stack, stack_b);
				rb(stack_b);
			}
			(*k)++;
		}
		else
		{
			ra(stack);
		}
	}
}
