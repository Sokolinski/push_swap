/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jp <jp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:59:29 by msakalin          #+#    #+#             */
/*   Updated: 2026/01/21 16:56:29 by jp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_atoi(const char *str, int *out)
{
	long	res;
	int		sign;
	int		d;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (*str >= '0' && *str <= '9')
	{
		d = *str - '0';
		if ((sign == 1 && res > (INT_MAX - d) / 10)
		 || (sign == -1 && res > (-(long)INT_MIN - d) / 10))
			return (false);
		res = res * 10 + d;
		str++;
	}
	*out = (int)(res * sign);
	return (true);
}
