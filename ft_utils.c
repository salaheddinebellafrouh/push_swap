/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:51:49 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 17:09:31 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)b;
	i = 0;
	while (len > i)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == 0)
		return (NULL);
	return (ft_memset(ptr, '\0', size * count));
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[k] != '\0')
		str[i++] = s2[k++];
	str[i] = '\0';
	return (str);
}

long	ft_atoi(char *str)
{
	long	result;
	long	sign;
	int		i;
	int		j;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error();
		if (str[--i] == '-')
			sign = -1;
		i++;
	}
	j = i--;
	while (str[++i])
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '"'))
			ft_error();
	i = j;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		result = result * 10 + str[i++] - '0';
	return (sign * result);
}

char	*ft_strdup(char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!(s2))
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
