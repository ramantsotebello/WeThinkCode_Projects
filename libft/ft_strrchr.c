/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:12:30 by egenis            #+#    #+#             */
/*   Updated: 2018/05/29 13:59:29 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	cntr;
	char	ch;
	char	*ptr;

	cntr = 0;
	ch = (char)c;
	ptr = NULL;
	while (s[cntr])
	{
		if (s[cntr] == ch)
			ptr = (char *)(&s[cntr]);
		++cntr;
	}
	if (s[cntr] == ch)
		ptr = (char *)(&s[cntr]);
	return (ptr);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	int		cntr;
	char	*last_ptr;

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
*/

int main(void)
{
	char ar[] = "Hello! lol what a noob!";
	printf("The pointer to c according to strrchr is %p\n", strrchr(ar, 'l'));
	printf("The pointer to c according to ft_strrchr is %p\n", ft_strrchr(ar, 'l'));
	printf("%s\n", strrchr(ar, 'l'));
	printf("%s\n", ft_strrchr(ar, 'l'));
	return (0);
}
