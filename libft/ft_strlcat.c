/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/21 09:36:38 by egenis           ###   ########.fr       */
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
	//printf("the last char is %c\n", s[count]);
	return (count);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t cntr;
	size_t nul_pos;
	size_t dst_len;
	size_t src_len;

	cntr = 0;
	nul_pos = ft_strlen(dst); // The index is on NULL.
	dst_len = nul_pos;
	src_len = ft_strlen(src); // NULL is not counted.
	while (cntr < src_len)
	{
		dst[nul_pos] = src[cntr];
		++nul_pos;
		++cntr;
	}
	if (dstsize - (src_len + 1) > 0)
		dst[src_len] = '\0';
	return (dst_len + src_len + 1);
}

int main(void)
{
	char dst[20] = "Hello Bro,";
	char src[] = "Hello.";
	size_t ans = ft_strlcat(dst, src, 20);
	//printf("string length is %lu\n", ft_strlen(dst));
	printf("%s\n", dst);
	return (0);
}
