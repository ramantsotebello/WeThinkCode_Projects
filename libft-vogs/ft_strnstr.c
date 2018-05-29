/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:32:39 by egenis            #+#    #+#             */
/*   Updated: 2018/05/29 14:48:38 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static _Bool	ft_matchline(const char *hay, const char *ndl)
{
	size_t	cntr;
	size_t	ndl_len;

	cntr = 0;
	ndl_len = ft_strlen(ndl);
	while (hay[cntr] == ndl[cntr] && hay[cntr] && ndl[cntr])
		++cntr;
	if (cntr == ndl_len)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cntr;
	size_t	ndl_len;
	_Bool	match;

	cntr = 0;
	ndl_len = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[cntr])
	{
		if (haystack + cntr + ndl_len > haystack + len)
			break ;
		match = ft_matchline(haystack + cntr, needle);
		if (match == 1)
			return ((char *)(haystack + cntr));
		++cntr;
	}
	return (NULL);
}