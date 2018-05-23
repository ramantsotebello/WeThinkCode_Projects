/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:40:34 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 11:04:36 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_toupper(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	return (ch >= 97 && ch <= 122 ? c - 32 : c);
}

int main(void)
{
	int cntr;

	cntr = 0;
	while (cntr <= 127)
	{
		printf("\n");
		printf("The return val is %d\n", toupper(cntr));
		printf("The return val is %d\n", ft_toupper(cntr));
		++cntr;
	}
	printf("\n");
	printf("The return val is %d\n", toupper(-1));
	printf("The return val is %d\n", ft_toupper(-1));
	printf("\n");
	printf("The return val is %d\n", toupper(128));
	printf("The return val is %d\n", ft_toupper(128));
	printf("\n");
	printf("The return val is %d\n", toupper(0));
	printf("The return val is %d\n", ft_toupper(0));
	return (0);
}
