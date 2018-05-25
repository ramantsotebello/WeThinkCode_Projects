/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:58:21 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 08:46:57 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	strlen;
	size_t	cntr;

	strlen = ft_strlen(src);
	cntr = 0;
	while (cntr < len)
	{
		if (src[cntr])
			dst[cntr] = src[cntr];
		else
			dst[cntr] = '\0';
		cntr++;
	}
	return (dst);
}
