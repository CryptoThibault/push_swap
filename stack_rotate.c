/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:40:01 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/01 17:01:06 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_rotate(t_stack *stack, int dir, int print)
{
	int	i;
	int	tmp;

	if (stack->top < 1)
		return ;
	dir = -dir;
	i = 0;
	if (dir < 0)
		i = stack->top;
	tmp = stack->items[i];
	while ((dir < 0 && i > 0) || (dir > 0 && i < stack->top))
	{
		stack->items[i] = stack->items[i + dir];
		i += dir;
	}
	stack->items[i] = tmp;
	if (print)
	{	
		if (dir > 0)
			ft_printf("r");
		ft_printf("r%c\n", stack->c);
	}
}
