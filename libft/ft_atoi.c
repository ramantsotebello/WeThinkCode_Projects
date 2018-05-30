/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:33:38 by egenis            #+#    #+#             */
/*   Updated: 2018/05/30 09:36:32 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
int	ft_atoi(const char *str)
{
	size_t	cntr;
	int		ans;
	t_uchar	sign;

	cntr = 0;
	ans = 0;
	sign = '+';
	while ((str[cntr] >= 9 && str[cntr] <= 13) || str[cntr] == 32)
		++cntr;
	if (str[cntr] == '+' || str[cntr] == '-')
	{
		sign = str[cntr];
		++cntr;
	}
	while (str[cntr] && (str[cntr] >= '0' && str[cntr] <= '9'))
	{
		ans *= 10;
		ans += str[cntr] - 48;
		++cntr;
	}
	if (sign == '-')
		ans *= -1;
	return (ans);
}
*/

/*
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
*/

// Here the pointer is used as a counter, it only goes to end, so O(N), the
// pointer skips over the first while range and spaces.
//
// If a sign is detected
// the pointer skips, and if the sign is negative, that is stored.
// 
// 0's after the sign is also skipped.
//
// The 3rd while loop just has conditions, num_cnt is used to protect against
// integer overflow.
//
// ans is the store buffer, str will get dereferenced first, then get sub-
// tracted, then incremented.
//
// ans * sign for if sign was '-'.
int	ft_atoi(const char *str)
{
	int		ans;
	int		sign;
	size_t	num_cnt;

	ans = 0;
	sign = 1;
	num_cnt = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str)
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str == 0)
		++str;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		ans = (ans * 10) + (*str++ - 48);
		if (num_cnt > 18)
			return (sign == '-' ? 0 : -1);
		++num_cnt;
	}
	return (ans * sign);
}

int	main(void)
{
	char ar[] = "54183";
	printf("atoi returns %d\n", atoi(ar));	
	printf("ft_atoi returns %d\n", ft_atoi(ar));	
	return (0);
}
