/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:58:21 by egenis            #+#    #+#             */
/*   Updated: 2018/05/31 16:00:40 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	strlen;
	size_t	cntr;

	strlen = ft_strlen(src);
	cntr = 0;
	ft_bzero(dst, len);
	if (!src)
		return (dst);
	while (cntr < len && src[cntr])
	{
		dst[cntr] = src[cntr];
		++cntr;
	}
	return (dst);
}
