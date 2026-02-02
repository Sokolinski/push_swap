/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:15:31 by jp                #+#    #+#             */
/*   Updated: 2026/02/02 09:46:35 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool is_sorted(t_node *head)
{
    t_node *current;

    if(!head || !head->next)
        return(true);
    current = head;

    while (current->next)
    {
        if(current->value > current->next->value)
            return(false);
        current = current->next;
    }
    return (true);
}
void sort_stack(t_node **stack_a, t_node **stack_b)
{
	if (is_sorted(*stack_a))
		return;

}

void sort_three(t_node **stack)
{
	int first;
	int second;
	int third;

	if(!stack || !*stack || !(*stack)->next || !(*stack)->next->next)
		return;
	first = (*stack)->value;
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if (first > second && second < third && first < third)
	    sa(stack);
	else if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
}
