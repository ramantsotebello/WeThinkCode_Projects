/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:07:00 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 08:34:57 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	int		ft_calc_divisor(int n)
{
	long	tmp;
	int		divisor;

	tmp = n;
	divisor = 1;
	if (tmp < 0)
		tmp *= -1;
	tmp /= 10;
	while (tmp > 0)
	{
		divisor *= 10;
		tmp /= 10;
	}
	return (divisor);
}

void 			ft_putnbr(int n)
{
	int		ans;
	int		divisor;
	long	tmp;

	ans = 0;
	divisor = ft_calc_divisor(n);
	tmp = n;
	if (tmp < 0)
	{
		tmp *= -1;
		ft_putchar(45);
	}
	while (divisor > 0)
	{
		ans = tmp / divisor;
		ft_putchar(ans + 48);
		tmp = tmp - (ans * divisor);
		divisor /= 10;
	}
}

int main(void)
{
	ft_putnbr(-2147483468);
	return (0);
}
