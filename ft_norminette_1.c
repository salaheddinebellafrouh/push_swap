/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norminette_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:44:00 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 18:25:59 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_norm(int argc, char *argv[], int i, char **dtr)
{
	char	*str;
	char	*tofree;
	int		k;

	str = ft_strdup("");
	while (i < argc)
	{
		argv[i] = ft_strjoin(argv[i], " ");
		i++;
	}
	i = 1;
	while (i < argc)
	{
		tofree = str;
		str = ft_strjoin(str, argv[i]);
		free(tofree);
		i++;
	}
	dtr = ft_split(str, ' ');
	k = 0;
	free(str);
	return (dtr);
}
