/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:39:10 by tchalaou          #+#    #+#             */
/*   Updated: 2024/03/27 15:51:44 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int		*items;
	int		top;
	char	c;
}		t_stack;

void	print_error(char **input);
int		array_size(char **array);
void	array_free(char **array);
char	**input_select(int ac, char **av, int *size);
void	input_check(char **input);
void	double_check(t_stack *stack);
int		stack_check(t_stack *stack);
t_stack	*stack_init(int size, char **input, char c);
void	stack_delete(t_stack *stack);
void	stack_swap(t_stack *stack, int print);
void	stack_push(t_stack *dest, t_stack *src, int print);
void	stack_rotate(t_stack *stack, int dir, int print);
void	push_swap(t_stack *a, t_stack *b);
void	push_swap_three(t_stack *a);
void	push_swap_chunks(t_stack *a, t_stack *b);
void	push_swap_highers(t_stack *a, t_stack *b);
int		chunk_size(int total);
int		*chunk_init(int total);
int		*find_lowers(t_stack *stack, int size);
int		find_closest(int *chunk, int size, int top);
int		find_higher(t_stack *stack);
int		find_higher_ignore(t_stack *stack, int ignore);
int		distance_top(int top, int index);
void	rotate_top(t_stack *stack, int i);
void	read_rules(t_stack *a, t_stack *b);
void	process_rule(t_stack *a, t_stack *b, char *rule);

#endif
