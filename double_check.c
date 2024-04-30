/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:33:41 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 15:57:51 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_check(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= stack->top)
	{
		j = -1;
		while (++j <= stack->top)
		{
			if (i != j && stack->items[i] == stack->items[j])
			{
				stack_delete(stack);
				print_error(NULL);
			}
		}
	}
}
