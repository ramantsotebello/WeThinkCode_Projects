/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:16:47 by egenis            #+#    #+#             */
/*   Updated: 2018/05/19 13:27:40 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Remember that when const appears before the data type, the pointer will be
 * not the cell */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	return (dst);
}
