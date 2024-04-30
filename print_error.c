/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:38:40 by tchalaou          #+#    #+#             */
/*   Updated: 2024/02/09 15:54:52 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char **input)
{
	if (input)
		array_free(input);
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}
