/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_closest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:57:05 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 14:58:06 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_closest(int *chunk, int size, int top)
{
	int	min_distance;
	int	closest_index;
	int	closest_value;
	int	distance;
	int	i;

	min_distance = distance_top(top, chunk[0]);
	closest_index = 0;
	closest_value = chunk[0];
	i = 0;
	while (++i < size)
	{
		distance = distance_top(top, chunk[i]);
		if (distance < min_distance)
		{
			min_distance = distance;
			closest_index = i;
			closest_value = chunk[i];
		}
	}
	i = closest_index - 1;
	while (++i < size - 1)
		chunk[i] = chunk[i + 1];
	return (closest_value);
}
