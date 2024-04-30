/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:38:05 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 15:55:42 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	input_check(char **input)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (input[++i])
	{
		j = -1 + (input[i][0] == '-');
		len = ft_strlen(input[i]) - (input[i][0] == '-');
		if (!len || len > 10)
			print_error(input);
		while (input[i][++j])
			if (!ft_isdigit(input[i][j]))
				print_error(input);
		if (len == 10)
		{
			if (input[i][0] == '-'
			&& ft_strncmp(input[i] + 1, "2147483648", 10) > 0)
				print_error(input);
			if (input[i][0] != '-'
			&& ft_strncmp(input[i], "2147483647", 10) > 0)
				print_error(input);
		}
	}
}
