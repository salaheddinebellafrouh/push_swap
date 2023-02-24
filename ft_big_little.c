/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_little.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:46:57 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 23:51:23 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_little(t_stack *stack, t_stack *stack_b, int i)
{
	if (i == 1 || i == 0)
		return ;
	if (i >= 2 && i < 6)
		ft_simple_sort(stack, stack_b, i);
	else
		ft_big_sort(stack, stack_b, i);
}
