/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:08:35 by egenis            #+#    #+#             */
/*   Updated: 2018/05/23 10:35:40 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int ft_isprint(int c)
{
	//unsigned char ch;

	/*
	ch = (unsigned char)c;i
	if (ch >= 040 && ch <= 047)
		return (1);
	if (ch >= 050 && ch <= 057)
		return (1);
	if (ch >= 060 && ch <= 067)
		return (1);
	if (ch >= 070 && ch <= 077)
		return (1);
	if (ch >= 0100 && ch <= 0107)
		return (1);
	if (ch >= 0110 && ch <= 0117)
		return (1);
	if (ch >= 0120 && ch <= 0127)
		return (1);
	*/
	return ((unsigned char)c >= 32 && (unsigned char)c <= 126 ? 1 : 0);
}

int main(void)
{
	int cntr;

	cntr = 0;
	while (cntr <= 127)
	{
		printf("\n");
		printf("The return val is %d\n", isprint(cntr));
		printf("The return val is %d\n", ft_isprint(cntr));
		++cntr;
	}
	printf("\n");
	printf("The return val is %d\n", isprint(-1));
	printf("The return val is %d\n", ft_isprint(-1));
	printf("\n");
	printf("The return val is %d\n", isprint(128));
	printf("The return val is %d\n", ft_isprint(128));
	return (0);
}
