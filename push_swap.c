/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:43:36 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 16:53:18 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		k;
	int		i;
	char	**dtr;
	stack_b	*stack_b;
	stack_a	*stack;

	dtr = NULL;
	i = 1;
		int j = 0;
	while(argv[i])
		ft_norminette(argv[i++]);
	i = 1;
	while (argv[i])
		ft_check_empty(argv[i++]);
	i = 1;
	dtr = ft_norm(argc, argv, i, dtr);
	k = 0;
	while (dtr[k])
		k++;
	stack_b = ft_init_b(k);
	stack = ft_init_a(k);
	i = ft_push_to_stack(stack, k, i, dtr);
	ft_check_dup(stack);
int t = 0;
if(stack->array[stack->top] == 0)
		t = 1;
	while(stack->array[j + 1 - t] && stack->array[j] > stack->array[j + 1])
		j++;
	if (j == i - 1)
		exit(0);
		
	ft_big_little(stack, stack_b, i);

	return (0);
}
