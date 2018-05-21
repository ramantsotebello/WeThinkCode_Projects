/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:12:30 by egenis            #+#    #+#             */
/*   Updated: 2018/05/21 13:58:51 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int cntr;
	char *last_ptr;

	cntr = 0;
	last_ptr = NULL;
	while (s[cntr])
	{
		if ((char)(s[cntr]) == (char)c)
			last_ptr = &((char *)s)[cntr];
		++cntr;
	}
	return (*last_ptr == (char)c ? last_ptr : NULL);
}

int main(void)
{
	char ar[] = "Hello There Fellow";
	printf("The char pointer found is %p\n", ft_strrchr(ar, 'e'));
	printf("The char pointer found is %p\n", strrchr(ar, 'e'));
	return (0);
}
