/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_Sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:49:09 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 22:18:40 by sbellafr         ###   ########.fr       */
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

int	*ft_duplicate(stack_a *s)
{
	int	i;
	int	*dup;

	i = 0;
	dup = malloc(sizeof(int) * (s->top));
	while (i <= s->top)
	{
		dup[i] = s->array[i];
		i++;
	}
	return (dup);
}



void	ft_big_sort(stack_a *stack, stack_b *stack_b, int i)
{
	int	r;
	int	*tmp;
	int	chunk;
	int	k;

	stack_b = ft_init_b(i);
	tmp = ft_duplicate(stack);
	bubble_sort(tmp, i);
	chunk = i / 5;
	k = 0;
	r = 0;
	ft_chunk(&k, chunk, stack, stack_b, tmp, &r, 1);
	ft_chunk(&k, chunk * 2, stack, stack_b, tmp, &r, 2);
	ft_chunk(&k, chunk * 3, stack, stack_b, tmp, &r, 3);
	ft_chunk(&k, chunk * 4, stack, stack_b, tmp, &r, 4);
	ft_chunk(&k, chunk * 5 - 1, stack, stack_b, tmp, &r, 5);
	while (r++ < i)
		pb(stack, stack_b);
	push_sorted_numbers_to_stack_a (stack, stack_b, tmp);
	free(tmp);
	free(stack);
	free(stack_b);
}
