/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:46:38 by jp                #+#    #+#             */
/*   Updated: 2026/01/20 19:27:45 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





int	sa(t_node **stack_a)
{
	int	check;

	check = swap(stack_a);
	if (check == 1)
		return (ft_printf("sa\n"));
	return (0);
}
int	sb(t_node **stack_b)
{
	int	check;

	check = swap(stack_b);
	if (check == 1)
		return (ft_printf("sb\n"));
	return (0);
}
int	ss(t_node **stack_a, t_node **stack_b)
{
	int check_a;
	int check_b;
	check_a = swap(stack_a);
	check_b = swap(stack_b);
	if (check_a == 1 && check_b == 1)
		return (ft_printf("ss\n"));
	return (0);
}

