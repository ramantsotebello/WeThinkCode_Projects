/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:58:21 by egenis            #+#    #+#             */
/*   Updated: 2018/05/28 14:30:08 by egenis           ###   ########.fr       */
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

void	ft_bzero(void *s, size_t n)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)s)[cntr] = 0;
		++cntr;
	}
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	strlen;
	size_t	cntr;

	strlen = ft_strlen(src);
	cntr = 0;
	ft_bzero(dst, len);
	if (!src)
		return (dst);
	while (cntr < len && src[cntr])
	{
		dst[cntr] = src[cntr];
		//else
		//	dst[cntr] = '\0';
		++cntr;
	}
	return (dst);
}

int main(void)
{
	char ar1nul[30] = "ert";
	char ar2nul[30] = "ert";
	//char ar1[30] = "Hello there friend.";
	//char ar2[30] = "Hello there friend.";
	char src[30] = "";
	printf("%s\n", strncpy(ar1nul, src, 5));
	printf("%s\n", ft_strncpy(ar2nul, src, 5));
	return (0);
}
