/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:39:46 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/01 17:00:16 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack *dest, t_stack *src, int print)
{
	if (src->top < 0)
		return ;
	dest->items[++dest->top] = src->items[src->top--];
	if (print)
		ft_printf("p%c\n", dest->c);
}
