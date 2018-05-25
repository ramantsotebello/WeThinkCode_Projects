/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:33:38 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 09:03:03 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		ans;
	int		sign;
	size_t	strlen;

	ans = 0;
	sign = 1;
	strlen = ft_strlen(str);
	if (strlen >= 19)
		return (-1);
	if (*str == '-' || *str == '+' || *str == ' ' || (*str >= 9 && *str <= 13))
	{
		if (*str == '-')
			sign *= -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while ((*str >= '0' && *str <= '9') && *str)
		ans = (ans * 10) + (*str++ - 48);
	return (ans * sign);
}
