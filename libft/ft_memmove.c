/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:42:28 by egenis            #+#    #+#             */
/*   Updated: 2018/05/26 17:29:49 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < len && (((unsigned char *)dst)[cntr]) &&
			(((unsigned char *)src)[cntr]))
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	return (dst);
}

int main(void)
{
	char buff1[30] = "Hello There Fellow!";
	char buff2[30] = "Hello There Fellow!";
	char src[30] = "LOLOLOL";
	printf("%s\n", memmove(buff1, src, 5));
	printf("%s\n", ft_memmove(buff2, src, 5));
	return (0);
}
