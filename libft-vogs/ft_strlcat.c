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

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strnlen(dst, dst_size);
	src_len = ft_strlen(src);
	if (dst_len == dst_size)
		return (dst_size + src_len);
	if (src_len < dst_size - dst_len)
		memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		memcpy(dst + dst_len, src, dst_size - 1);
		dst[dst_len + dst_size - 1] = '\0';
	}
	return (dst_len + src_len);
}