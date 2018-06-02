/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 13:33:46 by egenis            #+#    #+#             */
/*   Updated: 2018/06/02 13:39:24 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

size_t	ft_strclen(const char *s, const char c)
{
	size_t		cntr;
	t_uchar		ch;

	cntr = 0;
	ch = (t_uchar)c;
	if (!s)
		return (cntr);
	while (s[cntr] && s[cntr] != ch)
		++cntr;
	return (cntr);
}
