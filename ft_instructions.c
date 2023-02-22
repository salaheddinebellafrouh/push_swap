/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:50:42 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/20 19:27:28 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(stack_a *stack)
{
	int	store;

	store = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = store;
	write(1, "sa\n", 3);
}

void	pa(stack_a *a, stack_b *b)
{
	a->top++;
	a->array[a->top] = b->array[b->top];
	b->top--;
	write(1, "pa\n", 3);
}

void	pb(stack_a *a, stack_b *b)
{
	b->top++;
	b->array[b->top] = a->array[a->top];
	a->top--;
	write(1, "pb\n", 3);
}
