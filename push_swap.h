/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:55:22 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/23 00:14:30 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>

typedef struct Stack
{
	int	top;
	int	capacity;
	int	*array;
}	stack_a;

typedef struct Stack_b
{
	int	top;
	int	capacity;
	int	size;
	int	*array;
}	stack_b;
void		ft_error(void);
long		ft_strlen(char *str);
void	ft_chunk(int *k, stack_a *stack, stack_b *stack_b, int *tmp);
void	ft_chunk_two(int *k, stack_a *stack, stack_b *stack_b, int *tmp);
void	ft_chunk_three(int *k, stack_a *stack, stack_b *stack_b, int *tmp);
void	ft_chunk_four(int *k, stack_a *stack, stack_b *stack_b, int *tmp);
void	ft_chunk_five(int *k, stack_a *stack, stack_b *stack_b, int *tmp);
int			ft_smallest_index(stack_a *stack, int *smallest_index, int i);
int			ft_push_to_stack(stack_a *stack, int k, int i, char **dtr);
void		ft_big_little(stack_a *stack, stack_b *stack_b, int i);
void		ft_check_dup(stack_a *stack);
char		**ft_norm(int argc, char *argv[], int i, char **dtr);
void		ft_check_empty(char *str);
void		push_sorted_numbers_to_stack_a(stack_a *a, stack_b *b, int *tmp);
void		move_biggest_to_top(stack_a *a, stack_b *b);
void		push_back(stack_a *stack_a, stack_b *stack_b);
void		rb(stack_b *stack);
void		sa(stack_a *stack);
void		rra(stack_a *stack);
void		ra(stack_a *stack);
void		pa(stack_a *a, stack_b *b);
void		rrb(stack_b *b);
void		pb(stack_a *a, stack_b *b);
stack_a		*ft_init_a(int capacity);
void		push(stack_a *stack, int x);
char		**ft_split(char const *s, char c);
void		ft_simple_sort(stack_a *stack, stack_b *stack_b, int i);
stack_b		*ft_init_b(int capacity);
char		*ft_strjoin(char *s1, char *s2);
long long	ft_atoi(const char *str);
char		*ft_strdup(const char *s1);
int			check_sort(int *array, int l);
void		*ft_calloc(size_t count, size_t size);
void		ft_big_sort(stack_a *stack, stack_b *stack_b, int i);
int			index_biggest(stack_b *stack_b, int i);

#endif
