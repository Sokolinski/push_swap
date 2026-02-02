/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:06:29 by jp                #+#    #+#             */
/*   Updated: 2026/01/20 18:06:42 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pa(t_node **stack_a,t_node **stack_b)
{
	int check;
	
	check = push(stack_b,stack_a);
	if(check != 0)
		return(ft_printf("pa\n"));
	return (0);
}
int pb(t_node **stack_a,t_node **stack_b)
{
	int check;
	
	check = push(stack_a,stack_b);
	if(check != 0)
		return(ft_printf("pb\n"));
	return (0);
}