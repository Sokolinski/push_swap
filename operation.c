/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:05:03 by jp                #+#    #+#             */
/*   Updated: 2026/02/06 15:31:18 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (node_len(*stack) < 2)
		return (0);
	first = *stack;
	second = first->next;
	last = second->next;
	*stack = second;
	second->next = first;
	first->next = last;
	return (1);
}
int	push(t_node **from, t_node **to)
{
	t_node	*from_head;
	t_node	*to_head;

	if (node_len(*from) == 0)
		return (0);
	if(!to)
	{
		*to = new_node(from_head->value);
		return(1);
	}
	from_head = *from;
	to_head = *to;
	*from = from_head->next;
	*to = from_head;
	from_head->next = to_head;
	if(node_len(*from) == 1)
		*from = NULL;
	return (1);
}
int	error_meseage(void)
{
	return (write(1, "EROR\n", 5));
}
int	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*last;

	if (node_len(*stack) <= 1)
		return (0);
	head = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = head->next;
	last->next = head;
	head->next = NULL;
	return (1);
}

int	rev_rotate(t_node **stack)
{
	t_node *last;
	t_node *pre_last;
    t_node *head;

	if (node_len(*stack) <= 1)
		return (0);
    pre_last = *stack;
    head = *stack;
    while (pre_last->next->next != NULL)
    {
        pre_last = pre_last->next;
    }
    last = pre_last->next;
    pre_last->next = NULL;
    *stack = last;
    last->next = head;
    return(1);
}