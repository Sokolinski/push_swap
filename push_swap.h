/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:45:09 by msakalin          #+#    #+#             */
/*   Updated: 2026/02/08 15:09:02 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lbft/libft.h"
# include "printf/ft_printf.h"
# include <stdio.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

t_node				*new_node(int value);
void				add_node(t_node **t_list, t_node *new);
int					error_meseage(void);
int					node_len(t_node *node);
int					swap(t_node **stack);
int					sa(t_node **stack_a);
int					sb(t_node **stack_b);
int					ss(t_node **stack_a, t_node **stack_b);
int					push(t_node **from, t_node **to);
int					pa(t_node **stack_a, t_node **stack_b);
int					pb(t_node **stack_a, t_node **stack_b);
int					rotate(t_node **stack);
int					rev_rotate(t_node **stack);
int					rra(t_node **stack_a);
int					rrb(t_node **stack_b);
void				rrr(t_node **stack_a, t_node **stack_b);
void				free_split(char **split);
void				free_stake(t_node **stake);
int					parse_argv(char **argv, t_node **stack_a);
int					ra(t_node **stack_a);
int					rb(t_node **stack_b);
void				rr(t_node **stack_a, t_node **stack_b);
void				move_b(t_node **stack_a, t_node **stack_b);
void				move_a(t_node **stack_a, t_node **stack_b);
void				sort_stack(t_node **stack_a, t_node **stack_b);
#endif
