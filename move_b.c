/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:51:31 by jp                #+#    #+#             */
/*   Updated: 2026/02/08 15:12:30 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max_pos(t_node *stack_b);
static void	bring_max_to_top(t_node **stack_b, int pos);

void	move_b(t_node **stack_a, t_node **stack_b)
{
	int	pos;

	while (*stack_b)
	{
		pos = find_max_pos(*stack_b);
		bring_max_to_top(stack_b, pos);
		pa(stack_a, stack_b);
	}
}

static int	find_max_pos(t_node *stack_b)
{
	int	max_index;
	int	pos;
	int	len;

	len = node_len(stack_b);
	max_index = len - 1;
	pos = 0;

	while (stack_b)
	{
		if (stack_b->index == max_index)
		{
			if (pos <= len / 2)
				return (pos);
			else
				return (pos - len);
		}
		pos++;
		stack_b = stack_b->next;
	}
	return (0);
}

static void	bring_max_to_top(t_node **stack_b, int pos)
{
	if (pos >= 0)
	{
		while (pos--)
			rb(stack_b);
	}
	else
	{
		while (pos++)
			rrb(stack_b);
	}
}
