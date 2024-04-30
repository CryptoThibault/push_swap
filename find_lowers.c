/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:57:41 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:54:45 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*find_lowers(t_stack *stack, int size)
{
	int	*chunk;
	int	i;
	int	j;
	int	k;

	chunk = chunk_init(size);
	if (!chunk)
		return (NULL);
	i = -1;
	while (++i <= stack->top)
	{
		j = -1;
		while (++j < size)
		{
			if (chunk[j] == -1 || stack->items[i] < stack->items[chunk[j]])
			{
				k = size;
				while (--k > j)
					chunk[k] = chunk[k - 1];
				chunk[j] = i;
				break ;
			}
		}
	}
	return (chunk);
}
