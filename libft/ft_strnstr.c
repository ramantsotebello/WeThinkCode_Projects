/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:32:39 by egenis            #+#    #+#             */
/*   Updated: 2018/05/22 09:47:22 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
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

int main(void)
{
	char ar1[] = "Hello There Fellow Fellow";
	printf("%s\n", strnstr(ar1, "Fe", 0));
	printf("%s\n", ft_strnstr(ar1, "Fe", 0));
	return (0);
}
