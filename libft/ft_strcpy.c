/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:10:51 by egenis            #+#    #+#             */
/*   Updated: 2018/05/19 11:35:02 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	size_t strlen;
	unsigned long cntr;

	strlen = ft_strlen(src);
	cntr = 0;
	while (cntr < strlen)
	{
		dst[cntr] = src[cntr];
		++cntr;
	}
	dst[cntr] = '\0';
	return (dst);
}

int main(void)
{
	char ar1[] = "Hello Bro!";
	char ar2[] = "sdfhgsdhfg";
	printf("%s\n", ft_strcpy(ar1, ar2));
	return (0);
}
