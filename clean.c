/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:06:54 by jp                #+#    #+#             */
/*   Updated: 2026/02/08 13:57:26 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
}
void	free_stake(t_node **stake)
{
	t_node *next;
	t_node *curent;

	if (!*stake)
		return ;
	curent = *stake;
	while (curent)
	{
		next = curent->next;
		free(curent);
		curent = next;
	}
}