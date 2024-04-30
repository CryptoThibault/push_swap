/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:37:44 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 18:13:56 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**input;
	int		size;

	input = input_select(ac, av, &size);
	input_check(input);
	a = stack_init(size, input, 'a');
	array_free(input);
	double_check(a);
	b = stack_init(size, NULL, 'b');
	read_rules(a, b);
	if (!stack_check(a) && b->top == -1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	stack_delete(a);
	stack_delete(b);
	return (0);
}
