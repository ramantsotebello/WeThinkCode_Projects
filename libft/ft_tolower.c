/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:06:20 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 11:08:54 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	return (ch >= 65 && ch <= 90 ? c + 32 : c);
}

int main(void)
{
	int cntr;

	cntr = 0;
	while (cntr <= 127)
	{
		printf("\n");
		printf("The return val is %d\n", tolower(cntr));
		printf("The return val is %d\n", ft_tolower(cntr));
		++cntr;
	}
	printf("\n");
	printf("The return val is %d\n", tolower(-1));
	printf("The return val is %d\n", ft_tolower(-1));
	printf("\n");
	printf("The return val is %d\n", tolower(128));
	printf("The return val is %d\n", ft_tolower(128));
	printf("\n");
	printf("The return val is %d\n", tolower(0));
	printf("The return val is %d\n", ft_tolower(0));
	return (0);
}
