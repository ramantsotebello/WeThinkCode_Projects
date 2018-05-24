/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 17:11:47 by egenis            #+#    #+#             */
/*   Updated: 2018/05/18 17:35:40 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t cntr;

	cntr = 0;
	while (cntr < n && !(((unsigned char *)s)[cntr] == (unsigned char)c) &&
			(((unsigned char *)s)[cntr]))
		++cntr;
	if (((unsigned char *)s)[cntr] == (unsigned char)c)
		return (&(((unsigned char *)s)[cntr]));
	else
		return (NULL);
}
