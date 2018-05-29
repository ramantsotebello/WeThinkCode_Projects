/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:28:06 by egenis            #+#    #+#             */
/*   Updated: 2018/05/29 12:15:18 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	cntr;

	cntr = 0;
	if (!s)
		return (0);
	while (cntr < maxlen && s[cntr])
		++cntr;
	return (cntr);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		++count;
	return (count);
}

// dstsize should be the size of the buffer to be concatenated into, with
// space for a null.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	final_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	final_len = 0;
	// Return attempted created string if dst is not nul-terminated.
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
		memcpy(dst + dst_len, src, src_len + 1);	// Include NULL.
	final_len = ft_strlen(dst);
	// final_len would not include null, so if they're equal, the string is not
	// nul-terminated, which means you have to nul-terminate, and that can't
	// be on final_len as it ticks over.
	if (final_len == dstsize)
		dst[--final_len] = '\0';
	return (dst_len + src_len);
}

int main(void)
{
	/*
	char str[20] = "Hello there friend!";
	char buff1[31] = "Whatsup bro?";
	char buff2[31] = "Whatsup bro?";
	*/

	
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
	printf("max is %zu\n", max);

	size_t ans1 = strlcat(buff1, str, max);
	size_t ans2 = ft_strlcat(buff2, str, max);
	printf("%s\n", buff1);
	printf("%s\n", buff2);
	(void)ans1;
	(void)ans2;
	return (0);
}
