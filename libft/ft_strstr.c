/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:02:45 by egenis            #+#    #+#             */
/*   Updated: 2018/05/21 17:32:59 by egenis           ###   ########.fr       */
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

char *ft_strstr1(const char *haystack, const char *needle)
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
	while (cntr_ndl < ndl_len)
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

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	size_t ndl_len;

	i = 0;
	j = 0;
	match_count = 0;
	ndl_len = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] != needle[0])
		++i;
	if (!(haystack[i]))
		return (NULL);
	while (needle[j] == haystack[i] && needle[j])
	{
		++i;
		++j;
	}
	return (j
}

int main(void)
{
	char ar1[] = "Hello There Fellow";
	printf("%s\n", strstr(ar1, "ere"));
	printf("%s\n", ft_strstr1(ar1, "ere"));
	return (0);
}
