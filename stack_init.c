/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:39:36 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 15:59:08 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(int size, char **input, char c)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		print_error(input);
	stack->items = malloc(sizeof(int) * size);
	if (!stack->items)
	{
		free(stack);
		print_error(input);
	}
	stack->top = -1;
	stack->c = c;
	if (input)
		while (size)
			stack->items[++stack->top] = ft_atoi(input[size-- - 1]);
	return (stack);
}
