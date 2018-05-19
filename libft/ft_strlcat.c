/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/19 15:22:47 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t cntr;
	size_t nul_pos;
	size_t src_len;

	cntr = 0;
	nul_pos = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (cntr < src_len && cntr < dstsize)
	{
		dst[nul_pos] = src[cntr];
		++nul_pos;
		++cntr;
	}

}

int main(void)
{
	return (0);
}
