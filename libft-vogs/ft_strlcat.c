/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 08:48:58 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cntr;
	size_t	nul_pos;
	size_t	dst_len;
	size_t	src_len;

	cntr = 0;
	nul_pos = ft_strlen(dst);
	dst_len = nul_pos;
	src_len = ft_strlen(src);
	while (cntr < src_len)
	{
		dst[nul_pos] = src[cntr];
		++nul_pos;
		++cntr;
	}
	if (dstsize - (src_len + 1) > 0)
		dst[src_len] = '\0';
	return (dst_len + src_len + 1);
}
