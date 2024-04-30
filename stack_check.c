/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:38:13 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:04:16 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_check(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->top)
		if (stack->items[i] < stack->items[i + 1])
			return (1);
	return (0);
}
