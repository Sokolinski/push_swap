/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:15:31 by jp                #+#    #+#             */
/*   Updated: 2026/02/06 13:37:50 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool is_sorted(t_node *head);
static index_stack(t_node *stack);

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
	index_stack(*stack_a);
	move_a(stack_a,stack_b);
}

static index_stack(t_node *stack)
{
	t_node *current;
	t_node *head;
	int index;

	current = stack;
	index = 0;
	
	while (current)
	{
		head = stack;
		while (head)
		{
			if(current->value > head->value)
				index++;
			head = head->next;
		}
		current->index = index;
		index = 0;
		current = current->next;
	}
}
 void move_a(t_node **stack_a,t_node **stack_b)
{
	
}
