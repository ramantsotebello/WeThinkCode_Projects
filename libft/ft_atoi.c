/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:33:38 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 17:12:02 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

// Multiple +'s and multiple -'s lets atoi return 0.
int ft_atoi(const char *str)
{
	int ans;
	int sign;

	ans = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
		ans = (ans * 10) + (*str++ - 48);
	return (ans * sign);
}

int main(void)
{
	size_t cntr = 0;
	char test_ar[4] = "013";
	while (cntr <= 127)
	{
		test_ar[0] = cntr;
		printf("Returned int for cntr %zu is %d\n", cntr, atoi(test_ar));
		++cntr;
	}
	//printf("Returned int is %d\n", atoi("   \t\r5634"));
	//printf("Returned int is %d\n", ft_atoi("  \t\r5634"));
	return (0);
}
