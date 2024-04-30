/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:38:23 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 15:54:05 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	int	i;

	i = stack->top + 1;
	ft_printf("stack %c\n", stack->c);
	while (--i > -1)
		ft_printf("| %d\n", stack->items[i]);
}

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
	push_swap(a, b);
	stack_delete(a);
	stack_delete(b);
	return (0);
}
