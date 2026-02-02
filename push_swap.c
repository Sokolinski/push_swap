/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:54:38 by jp                #+#    #+#             */
/*   Updated: 2026/01/21 19:16:36 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int args, char **argv)
{
	t_node	**stack_b;
	t_node	**stack_a;

	if (args < 2)
		return (0);
	stack_a = malloc(sizeof(t_node *));
	if (!stack_a)
		return (error_meseage());
	stack_b = malloc(sizeof(t_node *));
	if (!stack_b)
		return (free(stack_a), error_meseage());
	*stack_a = NULL;
	*stack_b = NULL;
	if (parse_argv(argv, stack_a) == 0)
	{
		free_stake(stack_a);
		return (free(stack_a), free(stack_b), error_meseage());
	}

	free_stake(stack_a);
	free_stake(stack_b);
	return (free(stack_a), free(stack_b), 0);
}
