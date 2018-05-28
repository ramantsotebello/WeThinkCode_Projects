/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/28 14:58:20 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	cntr;

	cntr = 0;
	if (!s)
		return (0);
	while (cntr < maxlen && s[cntr])
		++cntr;
	return (cntr);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strnlen(dst, dst_size);
	src_len = ft_strlen(src);
	if (dst_len == dst_size)					// If no space to write.
		return (dst_size + src_len);			// Return attempted str size.
	if (src_len < dst_size - dst_len)			// Space for src and null.
		memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		memcpy(dst + dst_len, src, dst_size - 1);	// Copy as much as possible?
		dst[dst_len + dst_size - 1] = '\0';			// Leave space for nul?
	}
	return (dst_len + src_len);
}