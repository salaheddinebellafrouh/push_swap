/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:54:57 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 16:51:34 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_norminette(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '"'))
			ft_error();
		i++;
	}	
}