/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_select.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:34:25 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 16:15:45 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**input_select(int ac, char **av, int *size)
{
	char	**input;
	int		i;

	if (ac == 2)
	{
		input = ft_split(av[1], ' ');
		*size = array_size(input);
	}
	else
	{
		input = malloc(sizeof(char *) * ac);
		i = -1;
		while (av[++i + 1])
			input[i] = ft_strdup(av[i + 1]);
		input[i] = NULL;
		*size = ac - 1;
	}
	if (!*size)
	{
		array_free(input);
		exit(EXIT_SUCCESS);
	}
	return (input);
}
