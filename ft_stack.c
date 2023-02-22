/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:52:28 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 19:49:36 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

stack_a	*ft_init_a(int capacity)
{
	stack_a	*stack ;

	stack = (struct Stack *)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int *)malloc(stack->capacity * sizeof(int));
	return (stack);
}

stack_b	*ft_init_b(int capacity)
{
	stack_b	*stack_b ;

	stack_b = (struct Stack_b *)malloc(sizeof(struct Stack_b));
	stack_b->capacity = capacity;
	stack_b->size = capacity;
	stack_b->top = -1;
	stack_b->array = (int *)malloc(stack_b->capacity * sizeof(int));
	return (stack_b);
}

void	push(stack_a *stack, int x)
{
	stack->top++;
	stack->array[stack->top] = x;
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
