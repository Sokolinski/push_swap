/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:19:34 by jp                #+#    #+#             */
/*   Updated: 2026/01/20 19:25:17 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int rra(t_node **stack_a)
{
    int check;

    check = rev_rotate(stack_a);

    if(check == 1)
        return(ft_printf("rra\n"));
    return (0);
}

int rrb(t_node **stack_b)
{
    int check;

    check = rev_rotate(stack_b);

    if(check == 1)
        return(ft_printf("rrb\n"));
    return (0);
}
void rrr(t_node **stack_a,t_node **stack_b)
{
    rev_rotate(stack_a);
    rev_rotate(stack_b);
    ft_printf("rrr\n");
    return ;
}
