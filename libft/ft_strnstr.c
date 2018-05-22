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

char *ft_strnstr2(const char *haystack, const char *needle, size_t len)
{
	size_t cntr_hay;
	size_t cntr_ndl;
	size_t ndl_len;
	char *ndl_ptr;

	cntr_hay = 0;
	cntr_ndl = 0;
	ndl_len = ft_strlen(needle);
	while (cntr_ndl < ndl_len)
	{
		cntr_ndl = 0;
		while (needle[cntr_ndl] == haystack[cntr_hay])
			++cntr_ndl;
		++cntr_hay;
	}
}



void ft_cmp_str(const char *ndl, const char *h, size_t *cntrn, size_t *cntrhc)
{
	while (ndl[*cntrn] == h[*cntrhc] && ndl[*ctrn])
	{

	}
}

// This will probably have to be recoded.
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t cntr_hay;
	size_t cntr_ndl;
	size_t cntr_hay_cpy;
	size_t ndl_len;
	char *ndl_ptr;

	cntr_hay = 0;
	ndl_len = ft_strlen(needle);
	if (!(*needle))
		return ((char*)haystack);
	cntr_ndl = 0;
	while (cntr_ndl < ndl_len && haystack[cntr_hay] && cntr_hay < len)
	{
		cntr_ndl = 0;
		cntr_hay_cpy = cntr_hay;
		ndl_ptr = &((char *)haystack)[cntr_hay];
		while (needle[cntr_ndl] == haystack[cntr_hay_cpy] && needle[cntr_ndl])
		{
			++cntr_ndl;
			++cntr_hay_cpy;
		}
		++cntr_hay;
	}
	return (haystack[cntr_hay] == '\0' ? NULL : ndl_ptr);
}

int main(void)
{
	char ar1[] = "Hello There Fellow Fellow";
	printf("%s\n", strnstr(ar1, "ow", 30));
	printf("%s\n", ft_strnstr(ar1, "ow", 30));
	return (0);
}
