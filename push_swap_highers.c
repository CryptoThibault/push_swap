/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_highers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:59 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 13:56:12 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_highers(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	while (b->top > -1)
	{
		if (b->top > 0)
		{
			i = find_higher(b);
			j = find_higher_ignore(b, i);
			if (distance_top(b->top, i) < distance_top(b->top, j))
				rotate_top(b, i);
			else
			{
				rotate_top(b, j);
				stack_push(a, b, 1);
				i = find_higher(b);
				rotate_top(b, i);
			}	
		}
		stack_push(a, b, 1);
		if (a->items[a->top] > a->items[a->top -1])
			stack_swap(a, 1);
	}
}
