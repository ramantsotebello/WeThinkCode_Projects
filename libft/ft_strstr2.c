/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:02:45 by egenis            #+#    #+#             */
/*   Updated: 2018/05/22 08:29:52 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

char *ft_strstr2(const char *haystack, const char *needle)
{
	size_t cntr_hay;
	size_t cntr_ndl;
	size_t ndl_len;
	char *ndl_ptr;

	cntr_hay = 0;
	ndl_len = ft_strlen(needle);
	while (haystack[cntr_hay])
	{
		cntr_ndl = 0;
		ndl_ptr = &((char *)haystack)[cntr_hay];
		while (cntr_ndl < ndl_len)
		{

			++cntr_ndl;
		}
		++cntr_hay;
	}
}

char *ft_strstr(const char *haystack, const char *needle)
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
	while (cntr_ndl < ndl_len && haystack[cntr_hay])
	{
		cntr_ndl = 0;
		cntr_hay_cpy = cntr_hay;
		ndl_ptr = &(((char *)haystack)[cntr_hay]);
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
	char ar1[] = "Hello There Fellow";
	printf("%s\n", strstr(ar1, "duh"));
	printf("%s\n", ft_strstr(ar1, "duh"));
	return (0);
}
