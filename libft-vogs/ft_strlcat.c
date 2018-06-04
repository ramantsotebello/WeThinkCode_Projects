/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/06/04 17:01:42 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	final_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	final_len = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
		ft_memcpy(dst + dst_len, src, src_len + 1);
	final_len = ft_strlen(dst);
	if (final_len == dstsize)
		dst[--final_len] = '\0';
	return (dst_len + src_len);
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cntr;
	size_t	dst_len;
	size_t	src_len;

	cntr = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len);
	while (src[cntr] && dst_len + cntr < dstsize - 1)
	{
		dst[dst_len + cntr] = src[cntr];
		++cntr;
	}
	dst[dstsize - dst_len] = '\0';
	return (dst_len + src_len);
}
