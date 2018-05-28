/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:58:41 by egenis            #+#    #+#             */
/*   Updated: 2018/05/28 15:01:36 by egenis           ###   ########.fr       */
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

int main(void)
{
	//char ar1[] = "Hello there friend";
	char *ar2 = NULL;
	printf("The cntr for ar1 by strnlen is %zu\n", strnlen(ar2, 10));
	printf("The cntr for ar1 by ft_strnlen is %zu\n", ft_strnlen(ar2, 10));
	return (0);
}
