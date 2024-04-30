/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_chunks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:54:41 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:15:28 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_chunks(t_stack *a, t_stack *b)
{
	int	chunks;
	int	step;
	int	*chunk;

	chunks = (a->top - 2) / chunk_size(a->top - 2) + 1;
	while (chunks)
	{
		step = (a->top - 2) / chunks--;
		while (step)
		{
			chunk = find_lowers(a, step);
			rotate_top(a, find_closest(chunk, step--, a->top));
			free(chunk);
			stack_push(b, a, 1);
		}
	}
	push_swap_three(a);
	push_swap_highers(a, b);
}
