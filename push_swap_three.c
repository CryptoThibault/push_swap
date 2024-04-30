/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:41:08 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/01 17:03:10 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_three(t_stack *a)
{
	if (a->items[2] > a->items[1])
		stack_swap(a, 1);
	if (a->items[1] > a->items[0])
		stack_rotate(a, -1, 1);
	if (a->items[2] > a->items[1])
		stack_swap(a, 1);
}
