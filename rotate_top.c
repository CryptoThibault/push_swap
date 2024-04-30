/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:27:09 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/01 17:04:07 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_top(t_stack *stack, int i)
{
	int	dir;

	if (i > stack->top - i)
		dir = 1;
	else
		dir = -1;
	while (i > -1 && i < stack->top)
	{
		stack_rotate(stack, dir, 1);
		i += dir;
	}
}
