/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:42:28 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 16:58:50 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t cntr;

	cntr = 0;
	while (cntr < len && (((unsigned char *)dst)[cntr]) && (((unsigned char *)src)[cntr]))
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	return (dst);
}
