/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_funtion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:35:28 by jp                #+#    #+#             */
/*   Updated: 2026/01/22 18:40:48 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->value = value;
	return (node);
}

void	add_node(t_node **t_list, t_node *new)
{
	t_node	*last;

	if (!t_list || !new)
		return ;
	if (!*t_list)
	{
		*t_list = new;
		return ;
	}
	last = *t_list;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
}

int	node_len(t_node *node)
{
    
	int len;
	len = 0;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}
