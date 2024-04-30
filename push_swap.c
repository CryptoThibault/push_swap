/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:39:00 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:05:29 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	if (!stack_check(a))
		return ;
	if (a->top == 1)
	{
		if (a->items[1] > a->items[0])
			stack_swap(a, 1);
		return ;
	}
	push_swap_chunks(a, b);
}
