/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_Sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:49:09 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 00:15:01 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int arr[], int n)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				j = -1;
			}
			j++;
		}
		i++;
	}
}

int	*ft_duplicate(t_stack *s)
{
	int	i;
	int	*dup;

	i = 0;
	dup = malloc(sizeof(int) * (s->top + 1));
	while (i <= s->top)
	{
		dup[i] = s->array[i];
		i++;
	}
	return (dup);
}

void	ft_big_sort(t_stack *stack, t_stack *stack_b, int i)
{
	int	*tmp;
	int	chunk;
	int	k;

	stack_b = ft_init_b(i);
	tmp = ft_duplicate(stack);
	bubble_sort(tmp, i);
	chunk = i / 5;
	k = 0;
	ft_chunk(&k, stack, stack_b, tmp);
	ft_chunk_two(&k, stack, stack_b, tmp);
	ft_chunk_three(&k, stack, stack_b, tmp);
	ft_chunk_four(&k, stack, stack_b, tmp);
	ft_chunk_five(&k, stack, stack_b, tmp);
	while (k++ < i)
		pb(stack, stack_b);
	push_sorted_numbers_to_stack_a (stack, stack_b, tmp);
	free(tmp);
	free(stack);
}
