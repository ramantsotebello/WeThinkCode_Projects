/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:34:37 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 16:41:45 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n && !(((unsigned char *)src)[cntr] == (unsigned char)c))
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
	return (dst);
}
