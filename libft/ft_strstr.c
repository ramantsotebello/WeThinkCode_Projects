/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:02:45 by egenis            #+#    #+#             */
/*   Updated: 2018/05/21 16:35:23 by egenis           ###   ########.fr       */
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

char *ft_strstr(const char *haystack, const char *needle)
{
	int cntr_hay;
	int cntr_ndl;
	int cntr_hay_cpy;
	size_t ndl_len;

	cntr_hay = 0;
	ndl_len = ft_strlen(needle);
	while (cntr_ndl < ndl_len)
	{
		cntr_ndl = 0;
		cntr_hay_cpy = cntr_hay;
		if (needle[cntr_ndl] == haystack[cntr_hay_cpy])
		{
			++cntr_ndl;
			++cntr_hay_cpy;
		}
		++cntr_hay;
	}
}

int main(void)
{
	char ar1[] = "Hello There Fellow";
	return (0);
}
