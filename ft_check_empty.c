/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:25:18 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 00:14:03 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_empty(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		ft_error();
	i = 0;
	while (str[i] == ' ')
	{
		if (str[i] != ' ' && str[i])
		{
			break ;
		}
		i++;
		if (str[i] == '\0')
			ft_error();
	}
}
