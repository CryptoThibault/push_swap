/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_higher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:58:16 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:26:33 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_higher(t_stack *stack)
{
	int	high;
	int	i;
	int	pos;

	high = stack->items[0];
	i = 0;
	pos = 0;
	while (++i <= stack->top)
	{
		if (stack->items[i] > high)
		{
			high = stack->items[i];
			pos = i;
		}
	}
	return (pos);
}
