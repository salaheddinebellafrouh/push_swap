/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:52:28 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 23:54:31 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	*ft_init_a(int capacity)
{
	t_stack	*stack ;

	stack = (struct Stack *)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int *)malloc(stack->capacity * sizeof(int));
	return (stack);
}

t_stack	*ft_init_b(int capacity)
{
	t_stack	*stack_b ;

	stack_b = (struct Stack *)malloc(sizeof(struct Stack));
	stack_b->capacity = capacity;
	stack_b->size = capacity;
	stack_b->top = -1;
	stack_b->array = (int *)malloc(stack_b->capacity * sizeof(int));
	return (stack_b);
}

void	push(t_stack *stack, int x)
{
	stack->top++;
	stack->array[stack->top] = x;
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
