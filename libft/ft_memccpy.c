/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:34:37 by egenis            #+#    #+#             */
/*   Updated: 2018/05/26 16:59:20 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	t_uchar		*dst_cpy;
	t_uchar		*src_cpy;
	t_uchar		k;

	k = (unsigned char)c;
	i = 0;
	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		if (dst_cpy[i] == k)
			return (dst_cpy + i + 1);
		++i;
	}
	return (NULL);
}
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uchar		*dst_cpy;
	t_uchar		*src_cpy;
	size_t		cntr;

	dst_cpy = (t_uchar *)dst;
	src_cpy = (t_uchar *)src;
	cntr = 0;
	if (!(dst || src))
		return (NULL);
	while (cntr < n)
	{
		dst_cpy[cntr] = src_cpy[cntr];
		if (src_cpy[cntr] == (t_uchar)c)
			return (dst + cntr + 1);
		if (cntr == n)
			break ;
		++cntr;
	}
	return (NULL);
}

/*
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uchar		*dst_cpy;
	t_uchar		*src_cpy;
	char		ch;
	size_t		cntr;

	dst_cpy = (t_uchar *)dst;
	src_cpy = (t_uchar *)src;
	ch = (t_uchar)c;
	cntr = 0;
	while (cntr < n)
	{
		if (src_cpy[cntr] == c)
			break ;
		dst_cpy[cntr] = src_cpy[cntr];
		++cntr;
	}
	if (cntr == n)
		return (NULL);
	else
		return ((void *)(&dst[++cntr]));
}
*/

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	//int		testInt = atoi(av[2]);
	//char	testChar = av[1][0];
	char	*ptr1;
	char	*ptr2;
	//char	*nulptr = NULL;

	char	dst2[15] = "Hello There!";
	char	src2[] = "Evert! LOL";
	ptr2 = ft_memccpy(dst2, src2, 'L', 9);
	if (ptr2 == NULL)
		printf("\nptr2 is NULL\n");
	else
		printf("\nft_memccpy outputs:\n%s\n", ptr2);
	printf("\n%s\n", dst2);

	char	dst1[15] = "Hello There!";
	char	src1[] = "Evert! LOL";
	ptr1 = memccpy(dst1, src1, 'L', 9);
	if (ptr1 == NULL)
		printf("\nptr1 is NULL\n\n");
	else
		printf("\nmemccpy outputs:\n%s\n\n", ptr1);
	printf("\n%s\n", dst1);
}

/*
int		main(void)
{

	return (0);
}
*/
