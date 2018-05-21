/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:03:10 by egenis            #+#    #+#             */
/*   Updated: 2018/05/21 12:09:10 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int cntr;

	cntr = 0;
	while (s[cntr] != (char)c && s[cntr])
		++cntr;
	return (s[cntr] == (char)c ? (char *)(&(s[cntr])) : NULL);
}

int main(void)
{
	char ar[] = "Hello There!";
	printf("The char found is %s\n", (ft_strchr(ar, '\0')));
	printf("The char found is %s\n", (strchr(ar, '\0')));
	return (0);
}
