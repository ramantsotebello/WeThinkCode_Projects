/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:32:39 by egenis            #+#    #+#             */
/*   Updated: 2018/05/24 17:37:23 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t cntr_h;
	size_t cntr_n;
	size_t cntr_h_cp;
	size_t ndl_len;

	cntr_n = 0;
	cntr_h = 0;
	ndl_len = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (cntr_n < ndl_len && haystack[cntr_h] && cntr_h < len)
	{
		cntr_n = 0;
		cntr_h_cp = cntr_h;
		while (needle[cntr_n] == haystack[cntr_h_cp] && needle[cntr_n])
		{
			++cntr_n;
			++cntr_h_cp;
		}
		++cntr_h;
	}
	if (cntr_h == len)
		return (NULL);
	return (haystack[cntr_h] == '\0' ? NULL : (char *)&(haystack[cntr_h - 1]));
}
