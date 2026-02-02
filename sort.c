/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:15:31 by jp                #+#    #+#             */
/*   Updated: 2026/01/22 18:42:45 by jp               ###   ########.fr       */
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