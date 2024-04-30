/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:39:21 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 17:11:21 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_rules(t_stack *a, t_stack *b)
{
	char	*rule;

	while (1)
	{
		rule = get_next_line(STDIN_FILENO);
		if (!rule)
			break ;
		process_rule(a, b, rule);
		free(rule);
	}
}
