/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:40:43 by jp                #+#    #+#             */
/*   Updated: 2026/02/08 14:27:03 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_node **stack_a)
{
	int	check;

	check = rotate(stack_a);
	if (check == 1)
		return (ft_printf("ra\n"));
	return (0);
}
int	rb(t_node **stack_b)
{
	int	check;

	check = rotate(stack_b);
	if (check == 1)
		return (ft_printf("rb\n"));
	return (0);
}
void	rr(t_node **stack_b, t_node **stack_a)
{
	rotate(stack_b);
	rotate(stack_a);
	ft_printf("rr\n");
	return ;
}