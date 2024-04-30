/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:55:19 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 18:24:40 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*chunk_init(int size)
{
	int	*chunk;

	chunk = malloc(sizeof(int) * size);
	if (!chunk)
		return (NULL);
	ft_memset(chunk, -1, sizeof(int));
	return (chunk);
}
