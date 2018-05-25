/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:34:37 by egenis            #+#    #+#             */
/*   Updated: 2018/05/25 17:29:57 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < n && !(((unsigned char *)src)[cntr] == (unsigned char)c))
	{
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
	return (dst);
}
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		cntr;
	char		ch;

	cntr = 0;
	ch = (unsigned char)c;
	while (cntr < n)
	{
		if (((unsigned char *)src)[cntr] == c)
			break ;
		((unsigned char *)dst)[cntr] = ((unsigned char *)src)[cntr];
		++cntr;
	}
	if (cntr == n)
		return (NULL);
	else
		return ((void *)(&dst[++cntr]));
}

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	//int		testInt = atoi(av[2]);
	//char	testChar = av[1][0];
	char	*ptr1;
	char	*ptr2;
	char	*nulptr = NULL;

	char	dst2[15] = "Hello There!";
	char	src2[] = "Evert! LOL";
	ptr2 = ft_memccpy(dst2, src2, 'L', 9);
	if (ptr2 == NULL)
		printf("\nptr1 is NULL\n");
	else
		printf("\nft_memccpy outputs:\n%s\n", ptr2);

	char	dst1[15] = "Hello There!";
	char	src1[] = "Evert! LOL";
	ptr1 = memccpy(nulptr, src1, 'L', 9);
	if (ptr1 == NULL)
		printf("\nptr1 is NULL\n\n");
	else
		printf("\nmemccpy outputs:\n%s\n\n", ptr1);
}

/*
int		main(void)
{

	return (0);
}
*/
