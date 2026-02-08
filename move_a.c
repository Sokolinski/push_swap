/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:59:59 by jp                #+#    #+#             */
/*   Updated: 2026/02/08 12:48:35 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_cheapest(t_node *stack_a, int limit);
static void	push_b(t_node **stack_a, t_node **stack_b, int mid, int poss);

void	move_a(t_node **stack_a, t_node **stack_b)
{
	int	chnuck_size;
	int	limit;
	int	pushed;
	int	poss;
	int	mid;

	if (node_len(*stack_a) <= 100)
		chnuck_size = node_len(*stack_a) / 5;
	else
		chnuck_size = node_len(*stack_a) / 11;
	limit = chnuck_size;
	pushed = 0;
	mid = limit - chnuck_size + chnuck_size / 2;
	while (*stack_a)
	{
		if (pushed == chnuck_size)
		{
			limit += chnuck_size;
			pushed = 0;
			mid = limit - chnuck_size + chnuck_size / 2;
		}
		poss = find_cheapest(*stack_a, limit);
		push_b(stack_a, stack_b, mid, poss);
		pushed++;
	}
}

static int	find_cheapest(t_node *stack_a, int limit)
{
	int		index_top;
	int		index_bot;
	t_node	*current;

	index_top = 0;
	index_bot = 0;
	current = stack_a;
	while (current && current->index > limit)
	{
		current = current->next;
		index_top++;
	}
	current = stack_a;
	while (current)
	{
		if (current->index <= limit)
			index_bot = node_len(current);
		current = current->next;
	}
	if (index_top <= index_bot)
		return (index_top);
	return (index_bot * -1);
}
static void	push_b(t_node **stack_a, t_node **stack_b, int mid, int poss)
{
	if (poss >= 0)
	{
		while (poss > 0)
		{
			ra(stack_a);
			poss--;
		}
		pb(stack_a, stack_b);
		if (*stack_b && (*stack_b)->value < mid)
			rb(stack_b);
	}
	else if (poss < 0)
	{
		while (poss < 0)
		{
			rra(stack_a);
			poss++;
		}
		pb(stack_a, stack_b);
		if (*stack_b && (*stack_b)->value < mid)
			rb(stack_b);
	}
	return ;
}