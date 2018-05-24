/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:33:38 by egenis            #+#    #+#             */
/*   Updated: 2018/05/24 15:57:18 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

/*
** Multiple +'s and multiple -'s lets atoi return 0. Remember that *str++ and
** *(++str) makes a huge difference, in that the first element won't be skipped.
*/
int ft_atoi(const char *str)
{
	int ans;
	int sign;
	size_t strlen;

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

// Looks like it passes most tests. Including data type tests, nul-string, 
// +'s and -'s, and printable character skips.
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	/*
	size_t cntr = 0;
	char test_ar[4] = "013";
	while (cntr <= 127)
	{
		test_ar[0] = cntr;
		printf("atoi returned int for cntr %zu is %d\n", cntr, atoi(test_ar));
		++cntr;
	}
	cntr = 0;
	printf("\n");
	while (cntr <= 127)
	{
		test_ar[0] = cntr;
		printf("ft_atoi returned int for cntr %zu is %d\n", cntr, ft_atoi(test_ar));
		++cntr;
	}*/
	/*
	printf("\nft_atoi with multiple +'s or -'s return %d\n", ft_atoi(av[1]));
	printf("\nft_atoi with multiple +'s or -'s return %d\n", ft_atoi(av[1]));
	printf("\natoi with multiple +'s or -'s return %d\n", atoi(av[1]));
	printf("\natoi with multiple +'s or -'s return %d\n", atoi(av[1]));
	*/
	//printf("\nft_atoi with nul-string returns %d\n", ft_atoi(""));
	printf("\natoi with nul-string returns %d\n", ft_atoi(av[1]));
	return (0);
}
