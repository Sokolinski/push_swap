/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:31:32 by jp                #+#    #+#             */
/*   Updated: 2026/02/06 14:34:29 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  parse_string(char *str, t_node **stack_a);
static int  valid_number(char *str, t_node **stake_a);
static bool is_valid(char *str);
static bool is_unique(int value, t_node *stack_a);

int	parse_argv(char **argv, t_node **stack_a)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (parse_string(argv[i], stack_a) == 0)
			return (0);
		i++;
	}
	return (1);
}

static int	parse_string(char *str, t_node **stack_a)
{
	char	**split_str;
	int		i;

	i = 0;
	split_str = ft_split(str, ' ');
	if (!split_str)
		return (0);
	while (split_str[i])
	{
		if (valid_number(split_str[i], stack_a) == 0)
		{
			free_split(split_str);
			return (0);
		}
		i++;
	}
	free_split(split_str);
	free(split_str);
	return (1);
}
static int	valid_number(char *str, t_node **stake_a)
{
	int		value;
	t_node	*node;

	if (!is_valid(str))
		return (0);
	if (!ft_atoi(str, &value))
		return (0);
	if (!is_unique(value, *stake_a))
		return (0);
	node = new_node(value);
	if (!node)
		return (0);
	add_node(stake_a, node);
	return (1);
}
static bool	is_valid(char *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
		i = 1;
	}
	if (i == 0)
		return (false);
	return (true);
}
static bool	is_unique(int value, t_node *stack_a)
{
	while (stack_a)
	{
		if (stack_a->value == value)
			return (false);
		stack_a = stack_a->next;
	}
	return (true);
}