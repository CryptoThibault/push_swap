/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rule.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:10:25 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 18:08:36 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	wrong_rule(t_stack *a, t_stack *b, char *rule)
{
	free(rule);
	stack_delete(a);
	stack_delete(b);
	print_error(NULL);
}

void	process_swap_both(t_stack *a, t_stack *b)
{
	stack_swap(a, 0);
	stack_swap(b, 0);
}

void	process_rotate_both(t_stack *a, t_stack *b, int dir)
{
	stack_rotate(a, dir, 0);
	stack_rotate(b, dir, 0);
}

void	process_rule(t_stack *a, t_stack *b, char *rule)
{
	if (!ft_strncmp(rule, "sa\n", 3) && a->top > 0)
		stack_swap(a, 0);
	else if (!ft_strncmp(rule, "sb\n", 3) && b->top > 0)
		stack_swap(b, 0);
	else if (!ft_strncmp(rule, "ss\n", 3) && a->top > 0 && b->top > 0)
		process_swap_both(a, b);
	else if (!ft_strncmp(rule, "pa\n", 3) && b->top > -1)
		stack_push(a, b, 0);
	else if (!ft_strncmp(rule, "pb\n", 3) && a->top > -1)
		stack_push(b, a, 0);
	else if (!ft_strncmp(rule, "ra\n", 3))
		stack_rotate(a, 1, 0);
	else if (!ft_strncmp(rule, "rb\n", 3))
		stack_rotate(b, 1, 0);
	else if (!ft_strncmp(rule, "rr\n", 3))
		process_rotate_both(a, b, 1);
	else if (!ft_strncmp(rule, "rra\n", 4))
		stack_rotate(a, -1, 0);
	else if (!ft_strncmp(rule, "rrb\n", 4))
		stack_rotate(b, -1, 0);
	else if (!ft_strncmp(rule, "rrr\n", 4))
		process_rotate_both(a, b, -1);
	else
		wrong_rule(a, b, rule);
}
