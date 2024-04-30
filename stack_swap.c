/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:40:19 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/01 17:01:28 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_swap(t_stack *stack, int print)
{
	int	tmp;

	if (stack->top < 1)
		return ;
	tmp = stack->items[stack->top];
	stack->items[stack->top] = stack->items[stack->top - 1];
	stack->items[stack->top - 1] = tmp;
	if (print)
		ft_printf("s%c\n", stack->c);
}
