/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 17:36:15 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 09:05:45 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		cntr;
	char		ans;

	cntr = 0;
	while (cntr < n && (((unsigned char *)s1)[cntr]) &&
			(((unsigned char *)s2)[cntr]) &&
			(((unsigned char *)s1)[cntr] ==
			((unsigned char *)s2)[cntr]))
		++cntr;
	ans = ((char *)s1)[cntr] - ((char *)s2)[cntr];
	return ((int)ans);
}
