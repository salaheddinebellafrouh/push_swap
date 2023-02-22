/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:43:12 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/22 01:29:34 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	ft_countword(const char *str, int c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] && str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
		while (str[i] && str[i] == c)
			i++;
	}
	return (counter);
}

static char	**alloc(char const *s, char c, char **strs)
{
	size_t	counter;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		counter = 0;
		if (s[i] && s[i] != c)
		{
			while ((s[i] != '\0') && (s[i] != c))
			{
				i++;
				counter++;
			}
			strs[j] = ft_calloc(counter + 1, sizeof(char));
			if (!strs[j])
				return (NULL);
			j++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (strs);
}

static char	**fill(char const *s, char c, char **strs)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] && s[i] != c)
		{
			k = 0;
			while (s[i] && s[i] != c)
			{
				strs[j][k] = s[i];
				i++;
				k++;
			}
			j++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**strs;

	if (!s)
		return (NULL);
	count = ft_countword(s, c);
	strs = ft_calloc(count + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	if (!count)
		return (strs);
	strs = alloc(s, c, strs);
	strs = fill(s, c, strs);
	return (strs);
}

long	ft_strlen(char *s)
{
	long	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			i++;
		}	
	}
	return (i);
}
