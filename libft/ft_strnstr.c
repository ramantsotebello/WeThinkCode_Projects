/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:32:39 by egenis            #+#    #+#             */
/*   Updated: 2018/05/29 18:23:07 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cntr;
	t_uchar	*s1_cpy;
	t_uchar	*s2_cpy;

	cntr = 0;
	s1_cpy = (t_uchar *)s1;
	s2_cpy = (t_uchar *)s2;
	if (n == 0)
		return (0);
	while (cntr < n && s1_cpy[cntr] == s2_cpy[cntr])
		++cntr;
	if (cntr == n)
		--cntr;
	return (s1_cpy[cntr] - s2_cpy[cntr]);
}

/*
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
		while (needle[cntr_n] == haystack[cntr_h_cp++] && needle[cntr_n] &&
				&needle[cntr_n] <= &haystack[len])
		{
			++cntr_n;
		}
		++cntr_h;
	}
	if (cntr_h == len)
		return (NULL);
	return (haystack[cntr_h] == '\0' ? NULL : (char *)&(haystack[cntr_h - 1]));
}
*/


static _Bool	ft_matchline(const char *haystack, const char *needle)
{
	size_t	cntr;
	size_t	ndl_len;

	cntr = 0;
	ndl_len = ft_strlen(needle);
	while (haystack[cntr] == needle[cntr] && haystack[cntr] && needle[cntr])
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
	while (haystack[cntr] && cntr < len)
	{
		//if ()
			//return (NULL);
		//diff = ft_memcmp(haystack + cntr, needle, len);
		match = ft_matchline(haystack + cntr, needle);
		if (match == 1)
			return ((char *)(haystack + cntr));
		++cntr;
	}
	return (NULL);
}


int main(void)
{
	/*
	char *s1 = "A";
	char *i1 = strnstr(s1, s1, 2);
	char *i2 = ft_strnstr(s1, s1, 2);
	printf("%s\n", i1);
	printf("%s\n", i2);
	*/


	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);


	return (0);
}
