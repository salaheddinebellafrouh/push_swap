/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:55:22 by sbellafr          #+#    #+#             */
/*   Updated: 2023/02/24 17:05:18 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct Stack
{
	int	top;
	int	capacity;
	int	size;
	int	*array;
}	t_stack;

void		ft_norminette(char *str);
void		ft_error(void);
long		ft_strlen(char *str);
void		ft_chunk(int *k, t_stack *stack, t_stack *stack_b, int *tmp);
void		ft_chunk_two(int *k, t_stack *stack, t_stack *stack_b, int *tmp);
void		ft_chunk_three(int *k, t_stack *stack, t_stack *stack_b, int *tmp);
void		ft_chunk_four(int *k, t_stack *stack, t_stack *stack_b, int *tmp);
void		ft_chunk_five(int *k, t_stack *stack, t_stack *stack_b, int *tmp);
int			ft_smallest_index(t_stack *stack, int *smallest_index, int i);
int			ft_push_to_stack(t_stack *stack, int k, int i, char **dtr);
void		ft_big_little(t_stack *stack, t_stack *stack_b, int i);
void		ft_check_dup(t_stack *stack);
char		**ft_norm(int argc, char *argv[], int i, char **dtr);
void		ft_check_empty(char *str);
void		push_sorted_numbers_to_stack_a(t_stack *a, t_stack *b, int *tmp);
void		rb(t_stack *stack);
void		sa(t_stack *stack);
void		rra(t_stack *stack);
void		ra(t_stack *stack);
void		pa(t_stack *a, t_stack *b);
void		rrb(t_stack *b);
void		pb(t_stack *a, t_stack *b);
t_stack		*ft_init_a(int capacity);
void		push(t_stack *stack, int x);
char		**ft_split(char const *s, char c);
void		ft_simple_sort(t_stack *stack, t_stack *stack_b, int i);
t_stack		*ft_init_b(int capacity);
char		*ft_strjoin(char *s1, char *s2);
long		ft_atoi(char *str);
char		*ft_strdup(char *s1);
void		*ft_calloc(size_t count, size_t size);
void		ft_big_sort(t_stack *stack, t_stack *stack_b, int i);

#endif
